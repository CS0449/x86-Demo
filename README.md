
# CS0449 Recitation - Assembly Demo

This repository contains the sample C programs which were used to demo x86-64 assmebly language and GDB.

Created for [*CS0449: Introduction to System Software*](https://sites.pitt.edu/~shk148/teaching/CS0449-2234/) at the University of Pittsburgh
## Usage
Since we are working with x86-64 assembly language, we will need a machine that supports such an architecture. Students enrolled in CS0449: Introduction to System Software are given access to the CS department's Thoth machine which can be accessed via Secure Shell:

```sh
ssh USERNAME@thoth.cs.pitt.edu
```
Once you are logged in, navigate to your `private` directory using the change directory command (`cd`) and clone the repository:
```sh
git clone https://github.com/shinwookim/ASM-demo.git
```

Inspect the source files in the `src` directory. There are 3 C source files:
- [conditionals.c](src/conditionals.c)
- [for_loops.c](src/for_loops.c)
- [while_loops.c](src/while_loops.c)
These are simple C programs created to demonstrate how various control structures are implemented in C and how they are compiled to assembly.

In the same directory, a `Makefile` is provided to aid in compiling. To compile your programs, from the `src` directory run:

``` sh
make
```
Note by default the programs are compiled using `gcc` with the debug option(`-g` flag) DISABLED. Since we are focused on inspecting the assembly, seeing the code from within GDB is unnecessary.

To remove the executables, simply run:
```sh
make clean
```
## License

[MIT](https://choosealicense.com/licenses/mit/)

