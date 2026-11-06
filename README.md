*This project has been created as part of the 42/1337 curriculum by sohilmi.*

# Description

Libft is a custom C library developed from the ground up as part of the 42 curriculum. The project focuses on recreating essential functions from the standard C library while introducing additional tools for string manipulation, memory management, and linked list operations.

The main goal is to understand the inner workings of commonly used C functions rather than relying on existing implementations. By building these utilities from scratch, the project strengthens knowledge of pointers, memory allocation, data structures, and modular programming.

The resulting libft.a library provides a reusable foundation for future projects throughout the 42 curriculum.

# Instructions
Compilation

The project uses a Makefile to compile the source files and generate the static library libft.a.

make or make all: Compiles the library.
make clean: Removes object files (.o).
make fclean: Removes object files and the generated library.
make re: Rebuilds the library from scratch.
Usage

To use Libft in another C project, include the library header:

#include "libft.h"

Testing

Each function should be tested with different inputs, including edge cases and boundary conditions, to verify that it behaves as expected. Memory allocation and deallocation should also be checked carefully to avoid memory leaks and invalid memory access.

## Library Description

Libft is organized into three main categories.

### 1. Standard C Library Functions

This section reproduces selected standard C functions, providing a deeper understanding of character handling, memory operations, string processing, and allocation.

Character handling: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower.

Memory manipulation: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp.

String operations: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr.

Memory allocation: ft_calloc, ft_strdup.

### 2. Additional Utility Functions

This section introduces functions that simplify common programming tasks and extend the library's capabilities.

ft_substr: Extracts a portion of a string.
ft_strjoin: Combines two strings into a new string.
ft_strtrim: Removes specified characters from the beginning and end of a string.
ft_split: Divides a string into an array of strings using a delimiter.
ft_itoa: Converts an integer into a string.
ft_strmapi: Creates a new string by applying a function to each character.
ft_striteri: Applies a function to each character using its index.
ft_putchar_fd: Writes a character to a file descriptor.
ft_putstr_fd: Writes a string to a file descriptor.
ft_putendl_fd: Writes a string followed by a newline.
ft_putnbr_fd: Writes an integer to a file descriptor.
### 3. Linked List Operations

The section focuses on singly linked lists, allowing dynamic collections of elements to be created and manipulated using pointers.

ft_lstnew: Creates a new node.
ft_lstadd_front: Adds a node at the beginning of a list.
ft_lstsize: Returns the number of nodes.
ft_lstlast: Returns the last node.
ft_lstadd_back: Adds a node at the end of a list.
ft_lstdelone: Deletes a node and frees its content using a specified function.
ft_lstclear: Deletes and frees an entire list.
ft_lstiter: Applies a function to each node's content.
ft_lstmap: Creates a new list by applying a function to each element.

These operations reinforce the use of pointers, dynamic memory, and structured data management.

# Resources
Linux man-pages: https://man7.org/linux/man-pages/
Stack Overflow: https://stackoverflow.com/
GeeksforGeeks: https://www.geeksforgeeks.org/
cppreference: https://en.cppreference.com/w/c
W3Schools: https://www.w3schools.com/c/
Tutorialspoint: https://www.tutorialspoint.com/cprogramming/
GNU C Library Documentation: https://www.gnu.org/software/libc/manual/
42 Network: https://42.fr/

## AI Usage

AI tools, such as ChatGPT, were used as supplementary resources during the development of this project.

AI was used as a supporting tool for learning, understanding, and documentation, while the implementation and validation of the functions remained the responsibility of the project author.
