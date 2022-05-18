# Simple Shell Project

This repo contains ALX SE Program Simple_shell Project for Great Nwankire-Jonathan and Daniel Chinemerem. The project is a simple shell which should work like a normal terminal or command prompt when run on a computer.

## TO USE

1. Clone the Repository to your local machine
1. `cd` into the repo directory
1. Run the following code in your terminal to compile
 ```
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
 ```
> Note that you should have a valid C compiler installed, for this to work. In this example we have used `gcc` but you can replace it with `clang` or any other compiler available on your machine.

4. Then you can run in interactive mode like
``` ./hsh ```
> The code above is for a unix type machine, for windows, the compilation will produce a hsh.exe which you can click on
5. Or in non interactive mode like
``` echo "/bin/ls" | ./hsh ```


## Contributing Guide

1. [Fix] - Represents a bug fix, format - `[Fix]: Bug Fixed`
1. [Betty] - Represents a fix for code style compliance, format - `[Betty]: Trailing whitespace`
1. [Feat] - Represents a new file, or function that adds a feature of the shell, format - `[Feat]: Enable printing errors`
1. [Update] - Represents a generic update(Usually for testing).

## Authors
1. [Great Nwankire-Jonathan](https://github.com/The-Great1)
1. [Daniel Chinemerem](https://github.com/codacdanny)
