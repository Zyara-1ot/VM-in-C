# LC-3 Virtual Machine

A simple virtual machine implementation in C that simulates the LC-3 (Little Computer 3) architecture.

## Overview
This project implements a functional LC-3 VM that can load and execute LC-3 machine code. It includes a complete instruction set implementation and debugging utilities.

## Features
- 16-bit instruction set architecture
- 8 general-purpose registers (R0-R7)
- Program Counter (PC) and Condition Register (COND)
- Memory-mapped I/O
- Support for all LC-3 instructions:
  - Arithmetic: ADD, AND, NOT
  - Memory: LD, LDI, LDR, LEA, ST, STI, STR
  - Control: BR, JSR, JMP, RTI, TRAP
- Debug utilities for viewing memory and registers

## Files
- `vm.c` - Main VM implementation
- `vm_debug.c` - Debug utility functions
- `vm_debug.h` - Debug function declarations
- `prog.c` - Example program generator

## Compilation

### Compile the VM:
```bash
gcc -Wall -std=c11 vm.c vm_debug.c -o vm
```
OR
### Compile with Make (Recommended)
```bash
# Build everything
make

# Build specific target
make vm
make sum
make prog

# Clean up
make clean

# Rebuild from scratch
make clean && make

```


### Compile the example program generator:
```bash
gcc -Wall -std=c11 prog.c -o simple_program
```

## Usage

### 1. Generate a program file:
```bash
./simple_program
```

This creates `simple_program.obj`.

### 2. Run the VM:
```bash
./vm simple_program.obj
```

## Output
The VM will display:
- Memory state after program load
- Memory state after execution
- Final register values


## Architecture
The VM simulates:
- *Memory*: 65,536 addressable 16-bit locations
- *Registers*: 8 general purpose + PC + COND
- *Instruction Format*: 16-bit instructions with 4-bit opcode



