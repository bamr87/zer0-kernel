# zer0-kernel

> A hobby operating-system kernel in C, booted with Multiboot2 on QEMU.

From the boot sector up: a freestanding C kernel that boots under QEMU, then grows memory management, interrupts, a scheduler and a tiny shell.

**Status:** foundation (phase 1). Part of the [bamr87 fleet](https://github.com/bamr87/bamr87).

## Goals

- Multiboot2 kernel that boots in QEMU and prints to VGA/serial
- Interrupts, paging and a physical frame allocator
- Preemptive scheduler and a minimal shell

## Skills learned

- Freestanding C and linker scripts
- x86_64 boot, paging and interrupts
- Debugging with QEMU + GDB
- OS design fundamentals

## Fleet tie-in

Systems-depth companion to bashos and kvlite; the zer0 brand's lowest layer.

## Quick start

```bash
make
```

## How it grows

The roadmap lives in [PRD.md](PRD.md) and [features/features.yml](features/features.yml) (ids `ZK-NNN`, most `status: planned`). Work arrives as pull requests from the hub's evolution and fan-out loops, the `@claude` handler, or the local `evolve` lane (off until `EVOLVE_ENABLED=true`). A human merges every PR. Rules: [docs/constitution.md](docs/constitution.md) · agent guide: [AGENTS.md](AGENTS.md).

## License

[MIT](LICENSE)
