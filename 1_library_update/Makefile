# Variables
DIST_DIR = dist
LIB_V1_DIR = lib-v1
LIB_V2_DIR = lib-v2
LIB_V3_DIR = lib-v3

# Default target
all: help

# Help target
help:
	@echo "Available targets:"
	@echo "  lib-v1    - Build library version 1.0"
	@echo "  lib-v2    - Build library version 2.0"
	@echo "  lib-v3    - Build library version 3.0"
	@echo "  app       - Build the application"
	@echo "  run       - Run the application"
	@echo "  clean-lib - Clean build artifacts for libraries"
	@echo "  clean-all - Clean build artifacts for libraries and application"

# Build and install lib-v1
lib-v1: clean-lib
	@echo "Building lib-v1..."
	mkdir -p $(DIST_DIR)/lib $(DIST_DIR)/include
	cd $(LIB_V1_DIR) && mkdir -p build && cd build && cmake .. && make && make install

# Build and install lib-v2
lib-v2: clean-lib
	@echo "Building lib-v2..."
	mkdir -p $(DIST_DIR)/lib $(DIST_DIR)/include
	cd $(LIB_V2_DIR) && mkdir -p build && cd build && cmake .. && make && make install

# Build and install lib-v3 (keeps existing app for ABI testing)
lib-v3: clean-lib
	@echo "Building lib-v3..."
	mkdir -p $(DIST_DIR)/lib $(DIST_DIR)/include
	cd $(LIB_V3_DIR) && mkdir -p build && cd build && cmake .. && make && make install

# Build the application
app: clean-app
	@echo "Building application..."
	mkdir -p $(DIST_DIR)/bin build
	cd build && cmake .. && make && make install

# Run the application
run:
	$(DIST_DIR)/bin/calculator_app

clean-lib:
	rm -rf $(LIB_V1_DIR)/build $(LIB_V2_DIR)/build $(LIB_V3_DIR)/build $(DIST_DIR)/lib $(DIST_DIR)/include

# Clean build artifacts
clean-app:
	rm -rf build $(DIST_DIR)/bin

clean-all: clean-lib clean-app
	rm -rf $(DIST_DIR)

.PHONY: all help lib-v1 lib-v2 lib-v3 app run clean