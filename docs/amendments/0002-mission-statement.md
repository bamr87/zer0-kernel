<!-- kit: governance v0.1.0 -->
# 0002 — Missions

- **Status:** proposed
- **Date:** 2026-11-16
- **Proposed by:** Grok Bot (agent), at the maintainer's request
- **Ratified by:**
- **Affects:** constitution §1; PRD §1.1; feature ZK-008
- **Supersedes:** none
- **Related:** [PRD.md](../../PRD.md) §1.1; feature ZK-008

## Context

Constitution §1 Mission was a product description (or, for a new constitution, had not been written yet), not a three-mission direction statement. The fleet now requires every repo's constitution §1 to be one direction statement followed by exactly three numbered missions, adopted through a numbered amendment the maintainer ratifies by merging. The maintainer asked for those missions to be comprehensive and epic: zer0-kernel as the ultimate open home for all things hobby operating-system kernels. Mission 1 follows the maintainer's wording, adapted to this domain: provide data, tools, resources and transparency for all stakeholders, domain practitioners and the general public. The ambition is the direction, not a claim that the work is already finished. The missions are aligned with this repo's existing constitution and PRD.

## Amendment

Replace constitution §1 with the following, retitled **Missions**:

zer0-kernel's direction is to become the ultimate open home for all things hobby operating-system kernels — data, tools, resources and transparency, gathered in one place that anyone can inspect and reuse.

1. **Provide data, tools, resources and transparency for all stakeholders, systems programmers and students, and the general public.** Learners, hobbyist kernel authors and anyone who wants to see how a machine boots are first-class audiences. The aim is a shared, inspectable commons: the same sources, the same boot path, and the same reproducible QEMU runs for everyone.
2. **Teach from the boot sector up: a freestanding C kernel that boots under QEMU and grows memory management, interrupts, a scheduler and a tiny shell, with every step reproducible.** The work is learning-first: each layer should be something a reader can build, run and explain.
3. **Be the zer0 brand's lowest layer and a systems-depth companion to bashOS and kvlite, so the fleet's OS ideas can be studied, compared and reused in the open.** A hobby kernel here should illuminate the layers above it, not disappear into a private tree.

These missions set the course; they do not claim the work is finished. They serve the PRD's learning-first path from a Multiboot2 QEMU boot toward memory management, interrupts, a scheduler and a tiny shell.

_Source: [PRD.md](../PRD.md) §1.1._


## Consequences

Agents and reviewers judge fit against these three missions before inventing scope, treating them as the direction of the repo rather than a description of what already ships. The same text is added as PRD §1.1 so the constitution's `_Source:` line stays accurate. The original PRD purpose / overview paragraph is left in place. This PR also aligns the README and AGENTS.md taglines with the missions and links them to constitution §1, and adds feature ZK-008 to the feature catalog, traced to requirement MR1. Merging this PR ratifies amendment 0002. Until then the record stays `Status: proposed`.
