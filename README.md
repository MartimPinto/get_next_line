# get_next_line
>Function that will read a file descriptor line by line. 

</p>
<p align="center">
	<a href="#about">About</a> •
	<a href="#usage">Usage</a> •
	<a href="#norme">Norme</a>
</p>

## About
The get_next_line consists of creating a function that reads a file descriptor line by line and returns the next line each time it is called. The bonus part of this project requires altering the function so that it can handle multiple file descriptors simultaneously. This project aims to reinforce concepts such as memory management, file descriptors, and string manipulation. 

## Usage
#### 1st - Clone the repository
``` bash
git@github.com:MartimPinto/get_next_line.git get_next_line
```
#### 2nd - Enter the library folder and run Make
``` bash
cd ft_printf/src
make
```
#### 3rd - Include the header in your .c file
``` c
#include "ft_printf.h"
```
## Norme

All 42 projects must be written following the **Norme**.

	- No for, do while, switch, case or goto are allowed
	- No more than 25 lines per function and 5 functions per file
	- No assigns and declarations in the same line (unless static)
 	- Each line must be at most 80 columns wide, comments included
	- A function can take 4 named parameters maximum
	- No more than 5 variables in 1 function
