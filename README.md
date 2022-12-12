<h1 align="center">
  <br>
  <a href="http://www.github.com/ArthurCrespy"><img src="https://42.fr/wp-content/uploads/2021/05/42-Final-sigle-seul.svg" alt="42" width="200"></a>
  <br><br>
  Libft
  <br>
</h1>

<h3 align="center">Your very first own library</h3>

<h4 align="center">This project is about coding a C library. It will contain a lot of general purpose functions.</a></h4>

<p align="center">
    <a href="https://github.com/ArthurCrespy/libft/search?l=c"> <img alt="Language: C" src="https://img.shields.io/badge/language-C-orange"></a>
    <a href="https://github.com/ArthurCrespy/libft"> <img alt="Lines of code: 1.6k" src="https://img.shields.io/badge/total%20lines-1.6k-blue"></a>
    <a href="https://github.com/ArthurCrespy/libft/commits"> <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/ArthurCrespy/libft?color=yellow"></a>
    <a href="https://github.com/ArthurCrespy/libft/watchers"> <img alt="GitHub watchers" src="https://img.shields.io/github/watchers/ArthurCrespy/libft?color=ff69b4"></a>
    <a href="https://projects.intra.42.fr/42cursus-libft/acrespy"> <img alt="Result: 125/100" src="https://img.shields.io/badge/result-125/100-brightgreen"></a>
  
</p>

<p align="center">
  <a href="#introduction">Introduction</a> •
  <a href="#how-to-use">How To Use</a> •
  <a href="#description">Description</a> •
  <a href="#about-42-cursus">About 42 Cursus</a> •
  <a href="#you-may-also-like">Related</a> •
  <a href="#license">License</a>
</p>

## Introduction

C programming can be very tedious when one doesn’t have access to the highly useful standard functions. This project is about understanding the way these functions work, implementing and learning to use them.

## How To Use

To clone and run this project, you'll need [Git](https://git-scm.com) and [Clang](https://clang.llvm.org/) installed on your computer. From your command line:

```bash
# Clone this repository via HTTPS
$ git clone https://github.com/ArthurCrespy/libft
# OR clone this repository via SSH
$ git clone git@github.com:ArthurCrespy/libft.git

# Go into the repository
$ cd libft

# Run the Makefile
$ make
```

> **Note**
> The library will compile using ```clang``` with flags ```-Wall -Wextra -Werror``` and will be named ```libft.a```. After, objects files  by ```.o``` will be compiled with ```ar```. An index is added by ```ranlib```.

The library is compiled and ready to use.

### Makefile

- ```make``` or ```make all``` : Compile the library without bonus functions.
- ```make bonus``` : Compile the library only with bonus functions.
- ```make clean``` : Delete all objects files.
- ```make fclean``` : Delete all objects files and the library.
- ```make re``` : Delete all objects files and the library and recompile it.

## Description

### List of functions

- ```ft_atoi``` : Convert a string to an integer.
- ```ft_bzero``` : Write zeros to a byte string.
- ```ft_calloc``` : Allocate memory for an array of nmemb elements of size bytes each and return a pointer to the allocated memory.
- ```ft_isalnum``` : Check if the character is alphanumeric.
- ```ft_isalpha``` : Check if the character is alphabetic.
- ```ft_isascii``` : Check if the character is ASCII.
- ```ft_isdigit``` : Check if the character is a digit.
- ```ft_isprint``` : Check if the character is printable.
- ```ft_itoa``` : Convert an integer to a string.
- ```ft_memccpy``` : Copy bytes from memory area src to string dst.
- ```ft_memchr``` : Locate character in memory area.
- ```ft_memcmp``` : Compare bytes in memory area.
- ```ft_memcpy``` : Copy bytes in memory area.
- ```ft_memmove``` : Copy bytes in memory area.
- ```ft_memset``` : Write byte to memory area.
- ```ft_putchar_fd``` : Output the character ’c’ to the given file descriptor.
- ```ft_putendl_fd``` : Output the string ’s’ to the given file descriptor, followed by a newline.
- ```ft_putnbr_fd``` : Output the integer ’n’ to the given file descriptor.
- ```ft_putstr_fd``` : Output the string ’s’ to the given file descriptor.
- ```ft_split``` : Split string ’s’ using the character ’c’ as a delimiter.
- ```ft_strchr``` : Locate character in string.
- ```ft_strdup``` : Duplicate string.
- ```ft_strjoin``` : Concatenate strings.
- ```ft_strlcat``` : Append string src to the end of dst.
- ```ft_strlcpy``` : Copy string src to dst.
- ```ft_strlen``` : Calculate the length of the string.
- ```ft_strmapi``` : Apply the function ’f’ to each character of the string ’s’ to create a new string with ```malloc()``` resulting from successive applications of ’f’.
- ```ft_strncmp``` : Compare strings.
- ```ft_strnstr``` : Locate a substring in a string.
- ```ft_strrchr``` : Locate character in string.
- ```ft_strtrim``` : Trim characters from the beginning and the end of string.
- ```ft_substr``` : Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
- ```ft_tolower``` : Convert uppercase letter to lowercase.
- ```ft_toupper``` : Convert lowercase letter to uppercase.

### Bonus functions

- ```ft_lstadd_back``` : Add the element ’new’ at the end of the list.
- ```ft_lstadd_front``` : Add the element ’new’ at the beginning of the list.
- ```ft_lstclear``` : Delete and free the given element and every successor of that element, using the function ’del’ and free(3).
- ```ft_lstdelone``` : Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.
- ```ft_lstiter``` : Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
- ```ft_lstlast``` : Returns the last element of the list.
- ```ft_lstmap``` : Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.
- ```ft_lstnew``` : Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
- ```ft_lstsize``` : Counts the number of elements in a list.

## About 42 Cursus

This project is the first of the Cursus. It allows you to remember the basics of the C language seen in the Piscine. It's the only project of Core00 and unlocks Core01. The library will be reused in future projects

## You may also like...

- [get_next_line](https://github.com/ArthurCrespy/get_next_line) - Because reading from an fd is not exciting - (coming soon)
- [ft_printf](https://github.com/ArthurCrespy/ft_printf) - Because ft_putnbr() and ft_putstr() are not enough

## License

For now, all rights are reserved.

---
<p align="center">
    <a href="https://github.com/ArthurCrespy"> <img alt="Made by ArthurCrespy" src="https://img.shields.io/badge/made%20by-ArthurCrespy-blue"></a>
    <a href="https://42.fr"><img alt="42 Website" src="https://img.shields.io/badge/website-42.fr-blue"></a>
    <br>
    Github <a href="https://github.com/ArthurCrespy" target="_blank">@Thur'</a> |
    LinkedIn<a href="https://fr.linkedin.com/in/crespyarthur" target="_blank"> @Arthur Crespy</a> |
    Instagram<a href="https://instagram.com/arthurcrespy" target="_blank"> @crespyarthur</a> 
</p>
