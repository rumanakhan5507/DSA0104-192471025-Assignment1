# DSA01-192471025-Assignment1

**Assignment:** Design, Implement and Validate the Fare Logic of a City Metro Smart-Card System  
**Student:** M. Rumana Khan  
**Register number:** 192471025  
**Course:** DSA0104 — Object Oriented Programming using C++  
**Language:** C++17  
**Compiler used for local verification:** `g++ (Debian 14.2.0-19) 14.2.0`

## Repository contents

This repository contains the source code and program output for each of the 12 assignment tasks. Each task has its own folder with these two files:

- `main.cpp` — source code for the task.
- `output.txt` — output produced by running the program.

```text
Task01/
  main.cpp
  output.txt
Task02/
  main.cpp
  output.txt
...
Task12/
  main.cpp
  output.txt
```

## Requirements

- A C++ compiler that supports C++17, such as `g++`.
- No additional libraries are required.

## How to compile and run

Open a terminal in the folder for the task you want to run. For example, for Task 01:

```bash
cd Task01
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program
./program
```

On Windows PowerShell, run the compiled program with:

```powershell
.\program.exe
```

Replace `Task01` with the relevant task folder (`Task02` through `Task12`) to compile and run another task.

## Tasks included

1. **Task 01 — Problem analysis and object model:** Smart-card fare validation and minimum-balance rules.
2. **Task 02 — Tokens, identifiers and constants:** Examples of C++ language tokens and fare-related constants.
3. **Task 03 — Data types and money representation:** Floating-point accumulation and integer-paise representation.
4. **Task 04 — Type conversions:** Demonstrations of implicit and explicit conversions.
5. **Task 05 — Operator precedence:** Arithmetic, relational and logical operator examples.
6. **Task 06 — Control structures and fare decisions:** Fare calculation and balance validation.
7. **Task 07 — Procedural versus object-oriented programming:** Two approaches to processing a fare.
8. **Task 08 — Safe input parsing:** Validation of hour input.
9. **Task 09 — Fare tests and invalid inputs:** Boundary tests and validation checks.
10. **Task 10 — Scale and integer range:** Fare totals for different journey counts and integer limits.
11. **Task 11 — Final design recommendation:** Fare policy and smart-card class design.
12. **Task 12 — Airport, weekend discount and monthly pass:** Additional fare rules and pass coverage.

## Notes

- `output.txt` contains the recorded output for the corresponding source file.
- All 12 source files were compiled and run successfully in the local verification environment using C++17 and the compiler flags shown above.
- Runtime/compiler output can vary across systems. If required, compile and run the programs on your own computer before submission.
- After uploading this project to GitHub, copy the actual repository URL into your assignment submission.
