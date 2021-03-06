<?php
/**
 * @file
 * wf_issues.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function wf_issues_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'File adding media items in a new list item\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e2961614-6f2a-407f-92cc-88b428c5e58f\',
      \'nid\' => \'5\',
      \'type\' => \'file_page\',
      \'language\' => \'und\',
      \'created\' => \'1373414401\',
      \'changed\' => \'1373415234\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'064d71bc-ead4-4b9f-9db1-2c0395f6e93e\',
      \'revision_timestamp\' => \'1373415234\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>If you add a WF item in a new list below (remember to prefix it with a space) then hit enter to add another list item, and then try to insert a new file in the new list item, The existing file will already be selected in the WF popup indicating that you are still inside the WF token somehow. This only appears to happen with File based WF items, not Media based ones.</p>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>If you add a WF item in a new list below (remember to prefix it with a space) then hit enter to add another list item, and then try to insert a new file in the new list item, The existing file will already be selected in the WF popup indicating that you are still inside the WF token somehow. This only appears to happen with File based WF items, not Media based ones.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_file\' => array(),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'29\',
      \'uid\' => \'1\',
      \'title\' => \'Media deleting a Media item that is in use within list messes up list order\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1c0cd4a8-6bbe-4f78-bbb7-89ac2674e8c1\',
      \'nid\' => \'9\',
      \'type\' => \'media_page\',
      \'language\' => \'und\',
      \'created\' => \'1373415713\',
      \'changed\' => \'1373419802\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'50dacbc0-aa06-4324-95ca-ea1c87e3b012\',
      \'revision_timestamp\' => \'1373419802\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>We&#39;re pretty sure this ia aWYSIWYG issue</p><p>Now open <a href="/admin/content/file">/admin/content/file</a> and delete on of the meida items below, then edit this node and just click save, list chaos ensues.</p><p>Here is a list with just text in it</p><ul><li>List Item 1</li><li>List Item 2</li><li>List Item 3</li></ul><p>Now some more text, followed by a list item with mixed text and Media based WF items</p><ul><li>[wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_media" wf_formatter="file_default" wf_cache="1373419802" wf_entity_id="9" wf_entity_type="node"]</li><li>Now some text</li><li>[wysiwyg_field contenteditable="false" wf_deltas="1" wf_field="field_media" wf_formatter="file_default" wf_cache="1373419802" wf_entity_id="9" wf_entity_type="node"]</li><li>A Bit more text</li></ul><p>Now a list with just media items</p><ul><li>[wysiwyg_field contenteditable="false" wf_deltas="2" wf_field="field_media" wf_formatter="file_default" wf_cache="1373419802" wf_entity_id="9" wf_entity_type="node"]</li><li>[wysiwyg_field contenteditable="false" wf_deltas="3" wf_field="field_media" wf_formatter="file_default" wf_cache="1373419802" wf_entity_id="9" wf_entity_type="node"]</li><li>[wysiwyg_field contenteditable="false" wf_deltas="4" wf_field="field_media" wf_formatter="file_default" wf_cache="1373419802" wf_entity_id="9" wf_entity_type="node"]</li><li>[wysiwyg_field contenteditable="false" wf_deltas="5" wf_field="field_media" wf_formatter="file_default" wf_cache="1373419802" wf_entity_id="9" wf_entity_type="node"]</li></ul>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>We&#39;re pretty sure this ia aWYSIWYG issue</p><p>Now open <a href="/admin/content/file">/admin/content/file</a> and delete on of the meida items below, then edit this node and just click save, list chaos ensues.</p><p>Here is a list with just text in it</p><ul><li>List Item 1</li><li>List Item 2</li><li>List Item 3</li></ul><p>Now some more text, followed by a list item with mixed text and Media based WF items</p><ul><li><span class="file"><img class="file-icon" alt="" title="application/vnd.openxmlformats-officedocument.wordprocessingml.document" src="/modules/file/icons/x-office-document.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/NDA-edited_0.docx" type="application/vnd.openxmlformats-officedocument.wordprocessingml.document; length=51224">NDA-edited.docx</a></span></li><li>Now some text</li><li><span class="file"><img class="file-icon" alt="" title="text/plain" src="/modules/file/icons/text-plain.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/Sublime%20Text%203%20setup.txt" type="text/plain; length=1424">Sublime Text 3 setup.txt</a></span></li><li>A Bit more text</li></ul><p>Now a list with just media items</p><ul><li><span class="file"><img class="file-icon" alt="" title="text/plain" src="/modules/file/icons/text-plain.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/2013-04-06_ZNC%20Home.txt" type="text/plain; length=90">2013-04-06_ZNC Home.txt</a></span></li><li><span class="file"><img class="file-icon" alt="" title="text/plain" src="/modules/file/icons/text-plain.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/2013-07-02_ZNC%20Home.txt" type="text/plain; length=907">2013-07-02_ZNC Home.txt</a></span></li><li><span class="file"><img class="file-icon" alt="" title="text/plain" src="/modules/file/icons/text-plain.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/2013-05-19_ZNC%20Home.txt" type="text/plain; length=844">2013-05-19_ZNC Home.txt</a></span></li><li><span class="file"><img class="file-icon" alt="" title="text/plain" src="/modules/file/icons/text-plain.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/2013-06-13_ZNC%20Home.txt" type="text/plain; length=2026">2013-06-13_ZNC Home.txt</a></span></li></ul>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_media\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'22\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'NDA-edited.docx\',
            \'uri\' => \'public://media/NDA-edited_0.docx\',
            \'filemime\' => \'application/vnd.openxmlformats-officedocument.wordprocessingml.document\',
            \'filesize\' => \'51224\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415549\',
            \'type\' => \'document\',
            \'uuid\' => \'8b5fc045-b542-4f0c-851a-3f0c8c0aeb74\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'23\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Sublime Text 3 setup.txt\',
            \'uri\' => \'public://media/Sublime Text 3 setup.txt\',
            \'filemime\' => \'text/plain\',
            \'filesize\' => \'1424\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415604\',
            \'type\' => \'document\',
            \'uuid\' => \'87ab4a47-801b-44f6-b594-ab220587ff39\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'24\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'2013-04-06_ZNC Home.txt\',
            \'uri\' => \'public://media/2013-04-06_ZNC Home.txt\',
            \'filemime\' => \'text/plain\',
            \'filesize\' => \'90\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415655\',
            \'type\' => \'document\',
            \'uuid\' => \'8a9e071c-dbb9-4054-ae6e-94cb1be7d76f\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'25\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'2013-07-02_ZNC Home.txt\',
            \'uri\' => \'public://media/2013-07-02_ZNC Home.txt\',
            \'filemime\' => \'text/plain\',
            \'filesize\' => \'907\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415672\',
            \'type\' => \'document\',
            \'uuid\' => \'89d1dd4d-2d54-464f-99d7-d2ca65844c9b\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'26\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'2013-05-19_ZNC Home.txt\',
            \'uri\' => \'public://media/2013-05-19_ZNC Home.txt\',
            \'filemime\' => \'text/plain\',
            \'filesize\' => \'844\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415689\',
            \'type\' => \'document\',
            \'uuid\' => \'ba0f0d8b-e4d4-45e2-a56a-6e4a71db75d1\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'27\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'2013-06-13_ZNC Home.txt\',
            \'uri\' => \'public://media/2013-06-13_ZNC Home.txt\',
            \'filemime\' => \'text/plain\',
            \'filesize\' => \'2026\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415702\',
            \'type\' => \'document\',
            \'uuid\' => \'0da4bd5c-fd56-428b-ba28-d065cc172807\',
            \'metadata\' => array(),
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => \'Media Hard to delete WF items from a list\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'afccf666-57a0-46cc-a5ef-e664e38f2d3b\',
      \'nid\' => \'6\',
      \'type\' => \'media_page\',
      \'language\' => \'und\',
      \'created\' => \'1373414778\',
      \'changed\' => \'1373415201\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'636553e9-6c3e-4a92-97e3-e5319221fac2\',
      \'revision_timestamp\' => \'1373415201\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>If you click your cursor at the end of a WF item in the list, and then click again (if the WF icon was highlighted), you need to hit the delete/backspace key lots of times to delete the WF item, if you can at all. It works if the WF icon is highlighted though.</p><ul><li>&nbsp;[wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_media" wf_formatter="file_default" wf_cache="1373415201" wf_entity_id="6" wf_entity_type="node"]</li><li>&nbsp;[wysiwyg_field contenteditable="false" wf_deltas="1" wf_field="field_media" wf_formatter="file_default" wf_cache="1373415201" wf_entity_id="6" wf_entity_type="node"]</li></ul>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>If you click your cursor at the end of a WF item in the list, and then click again (if the WF icon was highlighted), you need to hit the delete/backspace key lots of times to delete the WF item, if you can at all. It works if the WF icon is highlighted though.</p><ul><li>&nbsp;<span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop_3.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></li><li>&nbsp;<span class="file"><img class="file-icon" alt="" title="application/vnd.openxmlformats-officedocument.wordprocessingml.document" src="/modules/file/icons/x-office-document.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/NDA-edited.docx" type="application/vnd.openxmlformats-officedocument.wordprocessingml.document; length=51224">NDA-edited.docx</a></span></li></ul>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_media\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'14\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'About-Realityloop.pdf\',
            \'uri\' => \'public://files/About-Realityloop_3.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'673552\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373414401\',
            \'type\' => \'document\',
            \'uuid\' => \'baf6d772-4c8f-4479-815f-78541a4f7855\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'19\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'NDA-edited.docx\',
            \'uri\' => \'public://media/NDA-edited.docx\',
            \'filemime\' => \'application/vnd.openxmlformats-officedocument.wordprocessingml.document\',
            \'filesize\' => \'51224\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373415009\',
            \'type\' => \'document\',
            \'uuid\' => \'8d1ba2a3-1017-4ea6-ad5f-b89ee480305d\',
            \'metadata\' => array(),
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'23\',
      \'uid\' => \'1\',
      \'title\' => \'File Hard to delete WF items from a list\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a31b2a1-ca32-423e-bd94-f778011dc6ea\',
      \'nid\' => \'8\',
      \'type\' => \'file_page\',
      \'language\' => \'und\',
      \'created\' => \'1373415278\',
      \'changed\' => \'1373415391\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'702ef114-bfc6-4c6c-92fc-fc5a839b252b\',
      \'revision_timestamp\' => \'1373415391\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>This is currently untestable due to <a href="/node/5">/node/5</a></p><p>If you click your cursor at the end of a WF item in the list, and then click again (if the WF icon was highlighted), you need to hit the delete/backspace key lots of times to delete the WF item, if you can at all. It works if the WF icon is highlighted though.</p>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>This is currently untestable due to <a href="/node/5">/node/5</a></p><p>If you click your cursor at the end of a WF item in the list, and then click again (if the WF icon was highlighted), you need to hit the delete/backspace key lots of times to delete the WF item, if you can at all. It works if the WF icon is highlighted though.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_file\' => array(),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'File br in empty list item\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'09a28bf4-fb1a-4197-86bd-0b609d3129ca\',
      \'nid\' => \'1\',
      \'type\' => \'file_page\',
      \'language\' => \'und\',
      \'created\' => \'1373258810\',
      \'changed\' => \'1373414188\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'99a5d7e6-ff41-4aa7-980a-378d24bf4739\',
      \'revision_timestamp\' => \'1373414188\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Some text followed by</p><ul><li>[wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_file" wf_formatter="file_default" wf_cache="1373414188" wf_entity_id="1" wf_entity_type="node"]</li><li><br />[wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_file" wf_formatter="file_default" wf_cache="1373414188" wf_entity_id="1" wf_entity_type="node"]</li><li>text</li></ul><p>In this example the wf item in the 3rd list item was added without adding a non breaking space inside the list item first, in this case a &lt;br&gt; tag gets inserted in front of it for some reason.</p>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>Some text followed by</p><ul><li><span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/files/Client%20Intake_0.pdf" type="application/pdf; length=101549">Client Intake.pdf</a></span></li><li><br /><span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/files/Client%20Intake_0.pdf" type="application/pdf; length=101549">Client Intake.pdf</a></span></li><li>text</li></ul><p>In this example the wf item in the 3rd list item was added without adding a non breaking space inside the list item first, in this case a &lt;br&gt; tag gets inserted in front of it for some reason.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_file\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'display\' => \'1\',
            \'description\' => \'\',
            \'uid\' => \'1\',
            \'filename\' => \'Client Intake.pdf\',
            \'uri\' => \'public://files/Client Intake_0.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'101549\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373258882\',
            \'type\' => \'document\',
            \'uuid\' => \'360ef159-0e91-43a4-a969-453940292f3d\',
            \'metadata\' => array(),
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'File copy and paste\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2b5b5237-bb4a-4c8f-a5ca-a622c346c1dc\',
      \'nid\' => \'3\',
      \'type\' => \'file_page\',
      \'language\' => \'und\',
      \'created\' => \'1373413692\',
      \'changed\' => \'1373419445\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a376b7b9-3b99-45af-85f4-16e866415dda\',
      \'revision_timestamp\' => \'1373419445\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Here is a File based WF item [wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_file" wf_formatter="file_default" wf_cache="1373419445" wf_entity_id="3" wf_entity_type="node"]</p><p>Now Im going to copy and paste it here <span class="file"><img alt="" class="file-icon" src="/modules/file/icons/application-pdf.png" title="application/pdf" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></p><p>As you can see in source mode it been converted to html instead of the token</p><p><span class="file">The process used to copy was to click the cursor to the right of the WF item and then arrow left once so that the entire WF item was highlighted, then I click CTRL/CMD+C to copy and CTRL/CMD+V to paste it, though the same happens if you highlight a media item including surrounding text.</span></p>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>Here is a File based WF item <span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop_0.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></p><p>Now Im going to copy and paste it here <span class="file"><img alt="" class="file-icon" src="/modules/file/icons/application-pdf.png" title="application/pdf" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></p><p>As you can see in source mode it been converted to html instead of the token</p><p><span class="file">The process used to copy was to click the cursor to the right of the WF item and then arrow left once so that the entire WF item was highlighted, then I click CTRL/CMD+C to copy and CTRL/CMD+V to paste it, though the same happens if you highlight a media item including surrounding text.</span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_file\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'11\',
            \'display\' => \'1\',
            \'description\' => \'\',
            \'uid\' => \'1\',
            \'filename\' => \'About-Realityloop.pdf\',
            \'uri\' => \'public://files/About-Realityloop_0.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'673552\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373413692\',
            \'type\' => \'document\',
            \'uuid\' => \'7498d8f9-c78e-45ec-912a-baccb3a49bed\',
            \'metadata\' => array(),
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Media br in empty list item\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e39ffdaa-bc8a-4d9a-91f1-9e8d877d8777\',
      \'nid\' => \'2\',
      \'type\' => \'media_page\',
      \'language\' => \'und\',
      \'created\' => \'1373259470\',
      \'changed\' => \'1373414206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c4cad91d-18e9-4aba-9ba1-5e2001c08c2d\',
      \'revision_timestamp\' => \'1373414206\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Some introductory text, followed by a list with media items in it</p><ul><li>[wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_media" wf_formatter="file_default" wf_cache="1373414206" wf_entity_id="2" wf_entity_type="node"]</li><li>[wysiwyg_field contenteditable="false" wf_deltas="1" wf_field="field_media" wf_formatter="file_default" wf_cache="1373414206" wf_entity_id="2" wf_entity_type="node"]</li><li><br />[wysiwyg_field contenteditable="false" wf_deltas="2" wf_field="field_media" wf_formatter="file_default" wf_cache="1373414206" wf_entity_id="2" wf_entity_type="node"]</li><li>[wysiwyg_field contenteditable="false" wf_deltas="3" wf_field="field_media" wf_formatter="file_default" wf_cache="1373414206" wf_entity_id="2" wf_entity_type="node"]</li><li>[wysiwyg_field contenteditable="false" wf_deltas="4" wf_field="field_media" wf_formatter="file_default" wf_cache="1373414206" wf_entity_id="2" wf_entity_type="node"]</li><li>some text</li></ul><p>In this example the wf item in the 3rd list item was added without adding a non breaking space inside the list item first, in this case a &lt;br&gt; tag gets inserted in front of it for some reason.</p>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>Some introductory text, followed by a list with media items in it</p><ul><li><span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/sign-left_0.pdf" type="application/pdf; length=477861">sign-left.pdf</a></span></li><li><span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/Mastering_Nginx.pdf" type="application/pdf; length=2440052">Mastering_Nginx.pdf</a></span></li><li><br /><span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/Airbnb%20Receipt%20Confirmation%20Code.pdf" type="application/pdf; length=35653">Airbnb Receipt Confirmation Code.pdf</a></span></li><li><span class="file"><img class="file-icon" alt="" title="image/png" src="/modules/file/icons/image-x-generic.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/ml-aegir.png" type="image/png; length=27100">ml-aegir.png</a></span></li><li><span class="file"><img class="file-icon" alt="" title="image/png" src="/modules/file/icons/image-x-generic.png" /> <a href="http://wf.ld/sites/wf.ld/files/media/the_pace_of_modern_life.png" type="image/png; length=549888">the_pace_of_modern_life.png</a></span></li><li>some text</li></ul><p>In this example the wf item in the 3rd list item was added without adding a non breaking space inside the list item first, in this case a &lt;br&gt; tag gets inserted in front of it for some reason.</p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_media\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'sign-left.pdf\',
            \'uri\' => \'public://media/sign-left_0.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'477861\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373259371\',
            \'type\' => \'document\',
            \'uuid\' => \'22fb9483-8bf4-4f1d-905e-2c94a82eddf0\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'6\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Mastering_Nginx.pdf\',
            \'uri\' => \'public://media/Mastering_Nginx.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'2440052\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373259422\',
            \'type\' => \'document\',
            \'uuid\' => \'59ab2c70-e4ec-4f7b-a365-4845cdc676dd\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'7\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'Airbnb Receipt Confirmation Code.pdf\',
            \'uri\' => \'public://media/Airbnb Receipt Confirmation Code.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'35653\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373259461\',
            \'type\' => \'document\',
            \'uuid\' => \'2607f01b-80eb-4235-801a-7ec2004caf02\',
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'8\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'ml-aegir.png\',
            \'uri\' => \'public://media/ml-aegir.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'27100\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373259512\',
            \'type\' => \'image\',
            \'uuid\' => \'5f1588b7-6dc4-4894-b924-5c0e121c2110\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'metadata\' => array(),
          ),
          array(
            \'fid\' => \'9\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'the_pace_of_modern_life.png\',
            \'uri\' => \'public://media/the_pace_of_modern_life.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'549888\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373259550\',
            \'type\' => \'image\',
            \'uuid\' => \'8b293dce-4f76-47e4-aa6b-a66d1f03e00b\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'metadata\' => array(),
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Media copy and paste\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4755f9b2-7096-4e66-865d-71fa99825d17\',
      \'nid\' => \'4\',
      \'type\' => \'media_page\',
      \'language\' => \'und\',
      \'created\' => \'1373413963\',
      \'changed\' => \'1373413963\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dbb7613d-6bff-4855-b4c8-5fc6c42b2284\',
      \'revision_timestamp\' => \'1373413963\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Here is a Media based WF item [wysiwyg_field contenteditable="false" wf_deltas="0" wf_field="field_media" wf_formatter="file_default" wf_cache="1373413963" wf_entity_id="4" wf_entity_type="node"]</p><p>And now I will copy and paste it here <span class="file"><img alt="" class="file-icon" src="/modules/file/icons/application-pdf.png" title="application/pdf" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop_0.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></p><p><span class="file">As you can see it has been converted to html instead of maintaining the token</span></p><p><span class="file">The process used to copy was to click the cursor to the right of the WF item and then arrow left once so that the entire WF item was highlighted, then I click CTRL/CMD+C to copy and CTRL/CMD+V to paste it, though the same happens if you highlight a media item including surrounding text.</span></p>\',
            \'summary\' => \'\',
            \'format\' => \'wysiwyg_file\',
            \'safe_value\' => \'<p>Here is a Media based WF item <span class="file"><img class="file-icon" alt="" title="application/pdf" src="/modules/file/icons/application-pdf.png" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop_0.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></p><p>And now I will copy and paste it here <span class="file"><img alt="" class="file-icon" src="/modules/file/icons/application-pdf.png" title="application/pdf" /> <a href="http://wf.ld/sites/wf.ld/files/files/About-Realityloop_0.pdf" type="application/pdf; length=673552">About-Realityloop.pdf</a></span></p><p><span class="file">As you can see it has been converted to html instead of maintaining the token</span></p><p><span class="file">The process used to copy was to click the cursor to the right of the WF item and then arrow left once so that the entire WF item was highlighted, then I click CTRL/CMD+C to copy and CTRL/CMD+V to paste it, though the same happens if you highlight a media item including surrounding text.</span></p>\',
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_media\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'11\',
            \'display\' => \'1\',
            \'description\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'About-Realityloop.pdf\',
            \'uri\' => \'public://files/About-Realityloop_0.pdf\',
            \'filemime\' => \'application/pdf\',
            \'filesize\' => \'673552\',
            \'status\' => \'1\',
            \'timestamp\' => \'1373413692\',
            \'type\' => \'document\',
            \'uuid\' => \'7498d8f9-c78e-45ec-912a-baccb3a49bed\',
            \'metadata\' => array(),
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
