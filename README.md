## My shop keyboard-hoarders.com and keyboardhoarders.etsy.com
![main](https://github.com/user-attachments/assets/27092a5b-7a79-4b93-8dbd-51b5fb032c02)

# Now offering wired version running Vial-QMK.  Check my shop for listings with that variant.

# keymap
![allium58](https://github.com/user-attachments/assets/43d4eedf-1694-4e77-b864-f2ef3c20e46b)

# Flashing instructions.
Flash firmware:

1.Keep both halves powered on.

2. Plug in right half. > press the physical reset button(located on the inner sides) twice quickly. > That will open a new directory on your computer called nice nano. > drag and drop the settings_reset file into that directory. (after transfer it will auto unmount and may give an error. Ignore this error and continue.) > after transfer unplug right half.

3. Plug in left half. > press physical reset button twice quickly. > Drag and drop same settings_reset file into directory. > after transfer leave plugged in.

4. Press physical reset button twice. > drag and drop lily58_left firmware into directory. > after transfer unplug.

5. Plug in right half > press reset button twice again > drag and drop lily58_right firmware into directory.

The right-half firmware includes the custom display artwork in
`boards/shields/allium_art`. The PNG in that directory is a physical-orientation
preview; `allium_art.c` is the generated 1-bit image embedded in firmware.


# Bluetooth
ZMK uses secure bluetooth profiles.  This means only one device per profile.  If you run into bluetooth issues I recommend wiping the stored profiles with BT_CLR_ALL button combo thats found on the lower layer.  If you want to flash your own firmware I have a guide on my website over at https://keyboard-hoarders.com/pages/guides-1
