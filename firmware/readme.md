# 2hu8

![2hu8](imgur.com image replace me!)

The **2hu8** is a 10-key "split" board meant for playing Touhou Project smhups, and other games with a similar arrow-keys-and-shift-ZXC control layout.

* Keyboard Maintainer: [bigyihsuan](https://github.com/bigyihsuan)
* Hardware Supported: Pro Micro ATmega32U4
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make 2hu8:default

Flashing example for this keyboard:

    make 2hu8:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
