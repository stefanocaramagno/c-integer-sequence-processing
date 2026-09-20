# Integer Sequence Processing in C

Integer Sequence Processing in C is a collection of eight independent console programs that explore how integer sequences can be read, filtered, compared, and summarized. The project progresses through core procedural programming concepts by calculating totals and averages, selecting values by position or parity, counting values that meet a condition, working with sentinel-terminated input, and comparing pairs of integers. Each exercise is intentionally self-contained, making the collection suitable for focused practice, classroom demonstrations, and a clear review of foundational C programming techniques.

## Project Overview

The exercises cover the following areas:

- controlled and sentinel-terminated input sequences;
- iterative processing with conditional logic;
- sums, counts, arithmetic means, and percentages;
- filtering by position, parity, and divisibility;
- pairwise comparison and aggregation;
- formatted console input and output.

Each source file contains its own entry point and must therefore be compiled as a separate executable.

## Exercise Catalog

| Source file | Purpose | Input flow |
| --- | --- | --- |
| `exercise_01.c` | Calculates the sum of an integer sequence. | Enter values when prompted and use a non-positive value to close the sequence. |
| `exercise_02.c` | Calculates the sum of a sequence of nonzero integers. | Enter any number of values, then enter `0` to finish. |
| `exercise_03.c` | Displays the values entered at even-numbered positions. | Enter values by position and use a non-positive value to close the sequence. |
| `exercise_04.c` | Displays every even value in an integer sequence. | Enter values, then enter `-1` to finish. |
| `exercise_05.c` | Calculates the arithmetic mean of the even values in a fixed-length sequence. | Enter the sequence length followed by that many integers, including at least one even value. |
| `exercise_06.c` | Counts the odd values and calculates their percentage within a sequence. | Enter at least one nonzero value, then enter `0` to finish. |
| `exercise_07.c` | Calculates the arithmetic mean of the values divisible by five. | Enter the sequence length followed by that many integers, including at least one multiple of `5`. |
| `exercise_08.c` | Calculates the mean of the greater value from each integer pair. | Enter a positive number of pairs, then provide both values for every pair. |

## Requirements

To build and run the complete collection, the system must provide:

- a C compiler with C11 support, such as GCC, Clang, or Microsoft Visual C++;
- a command-line environment, such as PowerShell, Terminal, Bash, or Zsh.

The programs use only the C standard library and require no third-party dependencies.

Confirm that the selected compiler is available before building:

```text
gcc --version
```

or:

```text
clang --version
```

On Windows, when using Microsoft Visual C++, open a Developer PowerShell or Developer Command Prompt and run:

```text
cl
```

## Build Instructions

Open a terminal in the repository root, then use the instructions for the current operating system and toolchain.

### Windows with GCC

In PowerShell, compile all eight programs with:

```powershell
Get-ChildItem -Filter "exercise_*.c" | Sort-Object Name | ForEach-Object {
    $output = [System.IO.Path]::GetFileNameWithoutExtension($_.Name)
    gcc -std=c11 -Wall -Wextra -pedantic $_.Name -o "$output.exe"
}
```

### Windows with Microsoft Visual C++

In a Developer PowerShell, compile all eight programs with:

```powershell
Get-ChildItem -Filter "exercise_*.c" | Sort-Object Name | ForEach-Object {
    $output = [System.IO.Path]::GetFileNameWithoutExtension($_.Name)
    cl /nologo /W4 /TC $_.Name "/Fe:$output.exe"
}
```

### macOS or Linux

GCC and Clang both expose a compatible `cc` command on a standard development setup. Compile all eight programs from Bash or Zsh with:

```bash
for source in exercise_*.c; do
    output="${source%.c}"
    cc -std=c11 -Wall -Wextra -pedantic "$source" -o "$output"
done
```

Successful compilation creates one executable for each source file in the repository root.

## Run Instructions

Every program is interactive and prints the prompts needed to supply its input. Run the exercises individually when exploring a specific task, or start the entire collection in numerical order.

### Run one exercise on Windows

```powershell
.\exercise_01.exe
```

Replace `01` with a number from `02` through `08` to run another exercise.

### Run the complete collection on Windows

```powershell
1..8 | ForEach-Object {
    $program = ".\exercise_{0:D2}.exe" -f $_
    & $program
}
```

### Run one exercise on macOS or Linux

```bash
./exercise_01
```

Replace `01` with a number from `02` through `08` to run another exercise.

### Run the complete collection on macOS or Linux

```bash
for program in ./exercise_0{1..8}; do
    "$program"
done
```

Complete the requested input for each program before the next executable starts. The sentinel value or fixed input count shown in the exercise catalog determines when each program finishes.

## Development Notes

- The exercises are independent and do not share state, headers, or build artifacts.
- A change to one exercise can be compiled and tested without rebuilding the others.
- Console messages are part of the interactive workflow and guide the required data entry.
- Compilation flags enable common diagnostics while keeping the build process portable across the supported toolchains.
