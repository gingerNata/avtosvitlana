/**
 * Created by nata on 12.07.17.
 */
Drupal.theme.prototype.CToolsModalDialog = function () {
    var html = '';
    html += '  <div id="ctools-modal my">';
    html += '    <div class="ctools-modal-content">';// panels-modal-content
    html += '      <div class="modal-header">';
    html += '        <a class="close" href="#">';
    html +=            Drupal.CTools.Modal.currentSettings.closeText + Drupal.CTools.Modal.currentSettings.closeImage;
    html += '        </a>';
    html += '        <span id="modal-title" class="modal-title"> </span>';
    html += '      </div>';
    html += '      <div id="modal-content" class="modal-content">';
    html += '      </div>';
    html += '    </div>';
    html += '  </div>';
    return html;
}