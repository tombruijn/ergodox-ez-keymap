# Having a file like this allows you to override Makefile definitions
# for your own particular keymap

SUBPROJECT_DEFAULT = ez
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
COMMAND_ENABLE   = no  # Commands for debug and configuration

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
