core = 7.x
api = 2



; Modules
projects[admin_menu][subdir] = contrib
projects[admin_menu][download][type] = git
projects[admin_menu][download][revision] = c98809313a49280a06d6b57d90f41feda1750518

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.4

projects[better_formats][subdir] = contrib
projects[better_formats][download][type] = git
projects[better_formats][download][revision] = 9106bcf3475eed59e5d4890bbd27d6f0ad1a6aa9

projects[coder][subdir] = contrib
projects[coder][download][type] = git
projects[coder][download][revision] = 6d297e4df68822f01eca9f2283931c014e02f342

projects[coffee][subdir] = contrib
projects[coffee][version] = 2.0

projects[config_builder][subdir] = contrib
projects[config_builder][download][type] = git
projects[config_builder][download][revision] = 779548a33a720b01f5d7b92abf1b8f1ba32a7285
; Remove Configuration builder makefile to prevent duplicate downloads
projects[config_builder][patch][] = http://drupalcode.org/project/config_builder.git/blob_plain/4314cf2da58c676f889170a1ffc48d1b34d457c6:/no_makefile.patch

projects[context][subdir] = contrib
projects[context][version] = 3.0-beta6
; Fixed context_empty() - http://drupal.org/node/1842566#comment-7269520
projects[context][patch][] = http://drupal.org/files/context_empty-1842566-1.patch

projects[context_admin][subdir] = contrib
projects[context_admin][download][type] = git
projects[context_admin][download][revision] = 15a8390e12805761d02d2bba84adfd2796a0a207
; Fix undefined index error - http://drupal.org/node/1760610#comment-6896652
projects[context_admin][patch][] = http://drupal.org/files/undefined_index-1760610-2.patch

projects[context_module][subdir] = contrib
projects[context_module][download][type] = git
projects[context_module][download][revision] = b7a05aa1299d9286b77f66c539826de9bebde2fb

projects[context_server_vars][subdir] = contrib
projects[context_server_vars][download][type] = git
projects[context_server_vars][download][revision] = f40a000c2809a700236d05873eb1bf30cb4da53f

projects[context_variable][subdir] = contrib
projects[context_variable][download][type] = git
projects[context_variable][download][revision] = 454b9b3f1f77978f2117ed0e51d7fc340cf5e39b

projects[ctools][subdir] = contrib
projects[ctools][download][type] = git
projects[ctools][download][revision] = b8671efe3fa154295ba5961b6f77b5c9a7a164e7

projects[custom_formatters][subdir] = contrib
projects[custom_formatters][download][type] = git
projects[custom_formatters][download][revision] = 6463508a3b9dbfb7feb5662b0f6825c9f58c6f60
; Remove Custom Formatters makefile to prevent duplicate downloads - http://drupal.org/node/1721294#comment-6395368
projects[custom_formatters][patch][] = http://drupal.org/files/no_makefile-1721294-1.patch

projects[delete_all][subdir] = contrib
projects[delete_all][download][type] = git

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[ds][subdir] = contrib
projects[ds][version] = 2.0

projects[entity][subdir] = contrib
projects[entity][version] = 1.0

projects[environment_indicator][subdir] = contrib
projects[environment_indicator][download][type] = git
projects[environment_indicator][download][revision] = 85946c2f51e2cb263e531934411a4dfe93e02fb1
; Variable integration - http://drupal.org/node/1950876#comment-7211018
projects[environment_indicator][patch][] = http://drupal.org/files/variable_integration-1950876-2.patch

projects[features][subdir] = contrib
projects[features][version] = 2.0-rc1
; Exportable Date types - http://drupal.org/node/1279928#comment-5902818
projects[features][patch][] = http://drupal.org/files/features-date-1279928-15.patch

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[file_entity][subdir] = contrib
projects[file_entity][download][type] = git
projects[file_entity][download][revision] = d3a647f96d147640879196466ad4fe71759c4462

projects[filefield_paths][subdir] = contrib
projects[filefield_paths][download][type] = git
projects[filefield_paths][download][revision] = 3f1d4495e3d8f4cfb4c4abef4fbf0c58c65b001c

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.5

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.1

projects[media][subdir] = contrib
projects[media][version] = 1.3

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[options_element][subdir] = contrib
projects[options_element][version] = 1.9

projects[overlay_expand][subdir] = contrib
projects[overlay_expand][version] = 1.0

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[site_verify][subdir] = contrib
projects[site_verify][download][type] = git
projects[site_verify][download][revision] = 6b4662210b333561a23ca498df3f91c060eabbd7
; Added CTools exportables integration: http://drupal.org/node/1230956#comment-6068128
projects[site_verify][patch][] = http://drupal.org/files/exportables-1230956-6.patch

projects[speedy][subdir] = contrib
projects[speedy][version] = 1.2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[tweaker][type] = module
projects[tweaker][subdir] = contrib
projects[tweaker][download][type] = git
projects[tweaker][download][url] = https://github.com/Decipher/tweaker.git
projects[tweaker][download][revision] = 49183a5d79737081f1d6ae581931a74edfdaf1c6

projects[variable][subdir] = contrib
projects[variable][version] = 2.2

projects[views][subdir] = contrib
projects[views][version] = 3.7

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.1

projects[which_feature][subdir] = contrib
projects[which_feature][download][type] = git
projects[which_feature][download][revision] = 3ba19eea51aa288806c2c6f6032bcf6a92291f92

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2
; Add CKEditor 4 support - http://drupal.org/node/1853550#comment-6902136
projects[wysiwyg][patch][] = http://drupal.org/files/wyiwyg-support_v4_ckeditor-1853550-42.patch

projects[wysiwyg_fields][subdir] = contrib
projects[wysiwyg_fields][download][type] = git
projects[wysiwyg_fields][download][revision] = 75b4364922081d90cf2de6172936eafbf424a6e6



; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor 4.0/ckeditor_4.0_full.tar.gz

libraries[editarea][download][type] = get
libraries[editarea][download][url] = http://downloads.sourceforge.net/project/editarea/EditArea/EditArea%200.8.2/editarea_0_8_2.zip?r=&ts=1334742944&use_mirror=internode

libraries[famfamfam_silk_icons][download][type] = file
libraries[famfamfam_silk_icons][download][url] = http://www.famfamfam.com/lab/icons/silk/famfamfam_silk_icons_v013.zip

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = 6655a1b490be896c53dceba9a2b887f39461bd08


