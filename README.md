# Project 0x12. C - printf

## Description
This is a partner project to write the C standard library function printf.

## Concepts
* Use github in a team setting to collaborate.
* Use flowcharts to visualize the function.

## Compilation
* Files will be compiled on Ubuntu 20.04 LTS using gcc, with the command:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
## Prototype
```
int _printf(const char *format, ...);
```
## Tasks:

#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.
Write a function that produces output according to a format.

* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* Write output to stdout, the standard output stream
* Format is a character string. The format string is composed of zero or more directives. Handle the following conversion specifiers:
 * c : prints a character.
 * s - prints a string.
 * % - prints the character %.

#### 1. Education is when you read the fine print. Experience is what you get if you don't.
* Handle the following conversion specifiers:
 * d - prints an integer.
 * i - prints an integer.

#### 2. Just because it's in print doesn't mean it's the gospel.
* Create a man page for your function.

## Authors
* Dustin Davis
* Vishal Gobin
