if(CONFIG_ZMK_DISPLAY AND CONFIG_SHIELD_ALLIUM_ART)
  zephyr_library_sources(custom_status_screen.c)
  zephyr_library_sources(allium_art.c)
endif()
