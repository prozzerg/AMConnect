TARGET ?= AMConnect

# Arduino CLI executable name and directory location
ARDUINO_CLI = arduino-cli
ARDUINO_CLI_DIR = ~/bin/

# Arduino CLI Board type
BOARD_TYPE ?= esp32:esp32:featheresp32

# Default port/OTA address to upload to
SERIAL_PORT ?= /dev/tty.usbserial-AB0LYA07
OTA_ADDR ?= 10.0.21.68

# Build path -- used to store built binary and object files
BUILD_PATH=../build

.PHONY: help build load ota clean

help: ## Show this help message.
	@echo 'usage: make <command>'
	@echo
	@echo 'Available commands:'
	@echo 'all - Build and load'
	@echo 'build - Compile/verify source'
	@echo 'clean - Clean/remove build source'
	@echo 'help - Show this help'
	@echo 'load - Load source using serial port'
	@echo 'ota - Load source using ArduinoOTA'
	@echo

all: build load

build:
	$(ARDUINO_CLI_DIR)/$(ARDUINO_CLI) compile -v --build-path=$(BUILD_PATH) --build-cache-path=$(BUILD_PATH) -b $(BOARD_TYPE) $(PWD)/$(TARGET)

load:
	$(ARDUINO_CLI_DIR)/$(ARDUINO_CLI) upload -v --input-dir=$(BUILD_PATH) -p $(SERIAL_PORT) --fqbn $(BOARD_TYPE) $(PWD)/$(TARGET)

ota:
	$(ARDUINO_CLI_DIR)/$(ARDUINO_CLI) upload -v --input-dir=$(BUILD_PATH) -p $(OTA_ADDR) --fqbn $(BOARD_TYPE) $(PWD)/$(TARGET)

clean:
	@rm -rf $(BUILD_PATH)
