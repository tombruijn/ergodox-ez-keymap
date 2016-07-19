# ErgoDox EZ Keymap

[Tom de Bruijn]'s [ErgoDox EZ] keymap.

This is a keymap used by the [qmk_firmware].

The keymap contains 4 layers. There are ASCII "images" of each layer in the
[keymap.c](keymap.c) file.

- 0. Base layer.
  - ErgoDox QWERTY keyboard
  - Modifier keys are different
- 1. Symbol layer
  - [Norman layout] symbol layer for ErgoDox
- 2. Media layer
  - Media controls
  - Arrow keys
- 3. Management layer
  - Same as layer 0, but every key is their HYPER version. Used by my
    [Hammerspoon config].

## Usage

The keymap in this repository is to be used in combination with the [qmk_firmware] repository.

Modify the [keymap.c](keymap.c) file to change the keyboard layout and layers.

## Installing keymap

1. Clone the [qmk_firmware] repository.
2. Follow the installation instruction on the [qmk_firmware] repository.
3. Clone this repository in the following directory inside the qmk_firmware repository:
  - `keyboards/ergodox_ez/keymaps/tombruijn/`
4. Start teensy and set teensy to automatic.
5. Modify keymap, if necessary.
6. Run the following command inside the `keyboards/ergodox_ez` directory.
  - `make clean && make KEYMAP=tombruijn`
7. Press the teensy button on the keyboard with a paperclip.
8. The ErgoDox EZ will restart with the new keymap.

Repeat steps 5-8 until happy :)

[Tom de Bruijn]: https://github.com/tombruijn
[Hammerspoon config]: https://github.com/tombruijn/dotfiles/tree/master/hammerspoon
[ErgoDox EZ]: https://ergodox-ez.com/
[Norman layout]: https://www.normanlayout.info/
[qmk_firmware]: https://github.com/jackhumbert/qmk_firmware
