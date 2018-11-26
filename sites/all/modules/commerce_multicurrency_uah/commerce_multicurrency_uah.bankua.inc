<?php

/**
 * Fetch the currency exchange rates for the requested currency combination.
 * Use bank-ua.com as provider.
 *
 * Return an array with the array(target_currency_code => rate) combination.
 *
 * @param string $currency_code
 *   Source currency code.
 * @param array $target_currencies
 *   Array with the target currency codes.
 *
 * @return array
 *   Array with the array(target_currency_code => rate) combination.
 */
function commerce_multicurrency_uah_exchange_rate_sync_provider_bankua($currency_code, $target_currencies) {
  $data = cache_get(__FUNCTION__, 'cache');

  if (!$data) {
    $bankua_rates = array();
    if (($xml = @simplexml_load_file('http://bank-ua.com/export/currrate.xml')) && @count($xml->item)) {
      foreach ($xml->item as $item) {
        $rate = (float) str_replace(',', '.', (string) $item->rate);
        $bankua_rates[(string) $item->char3] = empty($rate) ? 0 : $item->size / $rate;
      }
      cache_set(__FUNCTION__, $bankua_rates, 'cache', time() + 3600);
    }
    else {
      watchdog(
        'commerce_multicurrency', 'Rate provider Bank-ua.com: Unable to fetch / process the currency data of @url',
        array('@url' => 'http://bank-ua.com/export/currrate.xml'),
        WATCHDOG_ERROR
      );
    }
  }
  else {
    $bankua_rates = $data->data;
  }

  $rates = array();
  foreach ($target_currencies as $target_currency_code) {
    if ($currency_code == 'UAH' && isset($bankua_rates[$target_currency_code])) {
      $rates[$target_currency_code] = $bankua_rates[$target_currency_code];
    }
    elseif (isset($bankua_rates[$currency_code]) && $target_currency_code == 'UAH') {
      $rates[$target_currency_code] = 1 / $bankua_rates[$currency_code];
    }
    elseif (isset($bankua_rates[$currency_code]) && isset($bankua_rates[$target_currency_code])) {
      $rates[$target_currency_code] = $bankua_rates[$target_currency_code] / $bankua_rates[$currency_code];
    }
  }

  return $rates;
}
