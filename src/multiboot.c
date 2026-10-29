/* Multiboot2 header: magic, architecture (i386 protected mode), length, checksum, end tag. */
#include <stdint.h>

#define MB2_MAGIC 0xE85250D6u
#define MB2_ARCH 0u
#define MB2_LEN 24u

__attribute__((section(".multiboot"), used, aligned(8)))
static const uint32_t multiboot_header[6] = {
    MB2_MAGIC, MB2_ARCH, MB2_LEN, (uint32_t)(0u - (MB2_MAGIC + MB2_ARCH + MB2_LEN)),
    0, 8 /* end tag: type 0, flags 0, size 8 */
};
