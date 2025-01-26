# Subtle Pointer Error in C

This repository demonstrates a subtle pointer error that can occur in C code. The program modifies a variable using a pointer but may not produce the expected result due to a lack of understanding regarding how pointers affect memory locations.

## Bug Description

The provided code attempts to modify the value of an integer variable 'i' indirectly through a pointer.  However, the outcome is not guaranteed to be the value assigned through the pointer without proper understanding.

## How to Reproduce

1. Compile the code in `bug.c` using a C compiler (like GCC).
2. Run the compiled executable.
3. Observe the output. It will illustrate the unexpected behavior.

## Solution

The solution involves correcting the way the pointer is used to modify the variable. The solution file `bugSolution.c` provides a corrected version.