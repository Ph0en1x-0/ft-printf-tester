# phoenix-printf-tester

The phoenix-printf-tester is a test suite designed to validate the functionality of the custom ft_printf library by testing various format specifiers, including %s, %c, %x, %X, %u, %d, %i

## Table of Contents

- [Directory Structure](#directory-structure)
- [Requirements](#requirements)
- [Usage](#usage)

## Directory Structure
![Tree structure](~/Pictures/Screenshots/readme.png)


## Requirements

- Your Makefile should produce "libftprintf.a" in ft_printf/

- The header file "ft_printf.h" should be in ft_printf/

- The "phoenix-printf-tester" shoud be in ft_printf/

## Usage
when you have everything set up, you can run the following tests inside phoenix-printf-tester/.

- make : runs a test for %s, %c, %x, %X, %u, %d, %i.
- make s : runs a test for %s
- make c : runs a test for %c
- make i : runs a test for %i
- make d : runs a test for %d
- make u : runs a test for %u
- make x : runs a test for %x
- make X : runs a test for %X