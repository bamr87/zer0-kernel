/* zer0-kernel entry point. A 32-to-64-bit trampoline arrives in phase 1b; for now kmain writes to VGA text memory. */
#include <stdint.h>

static volatile uint16_t *const VGA = (uint16_t *)0xB8000;

void kmain(void) {
    const char *msg = "zer0-kernel 0.1.0";
    for (int i = 0; msg[i]; i++) {
        VGA[i] = (uint16_t)msg[i] | (uint16_t)(0x0F << 8);
    }
    for (;;) {
        __asm__ volatile("hlt");
    }
}
