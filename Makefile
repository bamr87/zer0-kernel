CC ?= gcc
LD ?= ld
CFLAGS := -ffreestanding -fno-stack-protector -fno-pic -mno-red-zone -nostdlib -O2 -Wall -Wextra -m64
LDFLAGS := -n -T linker.ld -m elf_x86_64 -nostdlib

all: build/kernel.elf

build/%.o: src/%.c
	@mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

build/kernel.elf: build/multiboot.o build/kernel.o linker.ld
	$(LD) $(LDFLAGS) -o $@ build/multiboot.o build/kernel.o

clean:
	rm -rf build

.PHONY: all clean
