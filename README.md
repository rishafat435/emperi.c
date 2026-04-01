# empiric.c

> A terminal-native study environment built in C.

**Status: Phase 0 — Environment Setup (in progress)**

---

## What This Is

`empiric.c` is a fully keyboard-driven, terminal-native study operating system. No GUI. No browser. Everything lives in the terminal.

The core is a daily planner, habit tracker, pomodoro timer, and spaced repetition scheduler built around the SM-2 algorithm. From there it expands into Obsidian vault access, a markdown renderer, a note editor, a calculator with graph output, and eventually web search — all inside a single cohesive TUI.

Named after empirical learning — the idea that you understand something by building it, not by studying it.

---

## Built With

- **C** — everything
- **notcurses** — TUI rendering and image display
- **MSYS2 / MinGW64** — Windows build environment

---

## Project Phases

### Core — The Study Machine
| Phase | Name | Status |
|-------|------|--------|
| 0 | Environment Setup | In Progress |
| 1 | TUI Shell | Not Started |
| 2 | Daily Planner | Not Started |
| 3 | Habit Tracker + Pomodoro | Not Started |
| 4 | Study Scheduler (SM-2) | Not Started |

### Expansion 1 — Notes Integration
| Phase | Name | Status |
|-------|------|--------|
| 5 | File System Access | Not Started |
| 6 | Markdown Renderer | Not Started |
| 7 | Note Editor | Not Started |

### Expansion 2 — Tools Integration
| Phase | Name | Status |
|-------|------|--------|
| 8 | Calculator Module | Not Started |
| 9 | Graph Rendering | Not Started |
| 10 | Universal Search | Not Started |

### Expansion 3 — Future
| Phase | Name | Status |
|-------|------|--------|
| 11 | Web Search | Not Started |
| 12 | LLM Integration | Not Started |

---

## Building

> Build instructions will be added when Phase 1 is complete.

Requires MSYS2 with MinGW64 and notcurses installed.

---

## Background

This project shares a backend with my previous project — a string-parsing scientific calculator built in C with a recursive bracket resolver, right-to-left operator precedence scan, trig functions, user accounts, and binary file persistence. That calculator becomes the calculator module in Expansion 2.

---

*This is a long-term solo project. Actively in development.*