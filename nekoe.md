
# Keymaps

- [crbn](keyboards/crbn/keymaps/nekoe/keymap.c)
- [crkbd](keyboards/crkbd/keymaps/nekoe/keymap.c)
- [ergodox_ez](keyboards/ergodox_ez/keymaps/nekoe/keymap.c)
- [babyv](keyboards/eyeohdesigns/babyv/keymaps/nekoe/keymap.c)
- [jd40](keyboards/jd40/keymaps/nekoe/keymap.c)

# How to

build firmware

```sh
qmk compile -kb <keyboard> -km default
```

flash image

```sh
qmk flash -kb <my_keyboard> -km <my_keymap>
```

# Troubleshoot

force erase

```sh
 dfu-programmer atmega32u4 erase --force
```