# Libft

<img src="libft_badge.png" width="150" height="150"/>

My first library!

This is the first project at school 42 and is about coding a C library.
It contains a lot of general purpose functions that my programs will rely upon.

#### Objectives
- Unix logic

#### Skills
- Algorithms & AI
- Imperative programming
- Rigor

#### My grade
<img src="libft_score.png" width="150" height="150"/>

----------

## Functions

### C Library <ctype.h>

-   [`ft_isalpha`](https://github.com/sklloyd/libft/blob/main/ft_isalpha.c) - Checks whether the passed character is alphabetic.
-   [`ft_isdigit`](https://github.com/sklloyd/libft/blob/main/ft_isdigit.c) - Checks whether the passed character is decimal digit.
-   [`ft_isalnum`](https://github.com/sklloyd/libft/blob/main/ft_isalnum.c) - Checks whether the passed character is alphanumeric.
-   [`ft_isascii`](https://github.com/sklloyd/libft/blob/main/ft_isascii.c) - Checks whether the passed character is ASCII.
-   [`ft_isprint`](https://github.com/sklloyd/libft/blob/main/ft_isprint.c) - Checks whether the passed character is printable.
-   [`ft_toupper`](https://github.com/sklloyd/libft/blob/main/ft_toupper.c) - Converts lowercase letters to uppercase.
-   [`ft_tolower`](https://github.com/sklloyd/libft/blob/main/ft_tolower.c) - Converts uppercase letters to lowercase.

### C Library <string.h>

-   [`ft_memset`](https://github.com/sklloyd/libft/blob/main/ft_memset.c) - Copies the character c (an unsigned char) to the first n characters of the string.
-   [`ft_strlen`](https://github.com/sklloyd/libft/blob/main/ft_strlen.c) - Computes the length of the string but not including the terminating null character.
-   [`ft_bzero`](https://github.com/sklloyd/libft/blob/main/ft_bzero.c) - Erases the data in the n bytes of the memory block. (Write zeroes)
-   [`ft_memcpy`](https://github.com/sklloyd/libft/blob/main/ft_memcpy.c) - Copies n characters from src to dest.
-   [`ft_memmove`](https://github.com/sklloyd/libft/blob/main/ft_memmove.c) - Copies n characters from src to dest. (Non destructive manner)
-   [`ft_strlcpy`](https://github.com/sklloyd/libft/blob/main/ft_strlcpy.c) - Copies up to dstsize - 1 characters from the string src to dst.
-   [`ft_strlcat`](https://github.com/sklloyd/libft/blob/main/ft_strlcat.c) - Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters.
-   [`ft_strchr`](https://github.com/sklloyd/libft/blob/main/ft_strchr.c) - Searches for the first occurrence of the character c (an unsigned char) in the string.
-   [`ft_strrchr`](https://github.com/sklloyd/libft/blob/main/ft_strrchr.c) - Searches for the last occurrence of the character c (an unsigned char) in the string.
-   [`ft_strncmp`](https://github.com/sklloyd/libft/blob/main/ft_strncmp.c) - Compares at most the first n bytes of str1 and str2.
-   [`ft_memchr`](https://github.com/sklloyd/libft/blob/main/ft_memchr.c) - Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string.
-   [`ft_memcmp`](https://github.com/sklloyd/libft/blob/main/ft_memcmp.c) - Compares the first n bytes of str1 and str2.
-   [`ft_strnstr`](https://github.com/sklloyd/libft/blob/main/ft_strnstr.c) - Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.

### C Library <stdlib.h>

-   [`ft_atoi`](https://github.com/sklloyd/libft/blob/main/ft_atoi.c) - Converts the string to an integer (type int).
-   [`ft_calloc`](https://github.com/sklloyd/libft/blob/main/ft_calloc.c) - Allocates the requested memory initialized to zero bytes.

### Non-stantard C Library

-   [`ft_substr`](https://github.com/sklloyd/libft/blob/main/ft_substr.c) - Returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.
-   [`ft_strjoin`](https://github.com/sklloyd/libft/blob/main/ft_strjoin.c) - Returns a new string, which is the result of the concatenation of 's1' and 's2'.
-   [`ft_strtrim`](https://github.com/sklloyd/libft/blob/main/ft_strtrim.c) - Returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.
-   [`ft_split`](https://github.com/sklloyd/libft/blob/main/ft_split.c) - Splits a string using a char as parameter.
-   [`ft_itoa`](https://github.com/sklloyd/libft/blob/main/ft_itoa.c) - Converts the int to a string (type char *).
-   [`ft_strmapi`](https://github.com/sklloyd/libft/blob/main/ft_strmapi.c) - Applies a function to each character of the string 's' to create a new string.
-   [`ft_striteri`](https://github.com/sklloyd/libft/blob/main/ft_striteri.c) - Applies a function to each character of the string.
-   [`ft_putchar_fd`](https://github.com/sklloyd/libft/blob/main/ft_putchar_fd.c) - Outputs the character 'c' to the given file descriptor.
-   [`ft_putstr_fd`](https://github.com/sklloyd/libft/blob/main/ft_putstr_fd.c) - Outputs the string 's' to the given file descriptor.
-   [`ft_putendl_fd`](https://github.com/sklloyd/libft/blob/main/ft_putendl_fd.c) - Outputs the string 's' to the given file descriptor, followed by a newline.
-   [`ft_putnbr_fd`](https://github.com/sklloyd/libft/blob/main/ft_putnbr_fd.c) - Outputs the integer 'n' to the given file descriptor.
-   [`ft_strdup`](https://github.com/sklloyd/libft/blob/main/ft_strdup.c) - Returns a pointer to a null-terminated byte string, which is a duplicate of the string.

### Linked list functions

-   [`ft_lstnew`](https://github.com/sklloyd/libft/blob/main/ft_lstnew.c) - Returns a new element.
-   [`ft_lstadd_front`](https://github.com/sklloyd/libft/blob/main/ft_lstadd_front.c) - Adds the element at the beginning of the list.
-   [`ft_lstsize`](https://github.com/sklloyd/libft/blob/main/ft_lstsize.c) - Counts the number of elements in a list.
-   [`ft_lstlast`](https://github.com/sklloyd/libft/blob/main/ft_lstlast.c) - Returns the last element of the list.
-   [`ft_lstadd_back`](https://github.com/sklloyd/libft/blob/main/ft_lstadd_back.c) - Adds the element at the end of the list.
-   [`ft_lstclear`](https://github.com/sklloyd/libft/blob/main/ft_lstclear.c) - Deletes and frees the given element and every successor of that element, using a given function and free.
-   [`ft_lstiter`](https://github.com/sklloyd/libft/blob/main/ft_lstiter.c) - Iterates the list and applies a function to the content of each element.
-   [`ft_lstmap`](https://github.com/sklloyd/libft/blob/main/ft_lstmap.c) - Iterates the list and applies a function to the content of each element. Creates a new list resulting of the successive applications of the function. A 'del' function is used to delete the content of an element if needed.

---------------

## Usage

### Requirements

`libft` requires a _gcc_ compiler and some standard libraries.

### Instructions

Clone this repository to your local computer:

$> git clone https://github.com/sklloyd/libft.git path/to/libft

In your local repository, run `make`

$> make 

> `make` suports 6 flags:
> 
> -   `make all` or simply `make` compiles only the mandatory functions
> -   `make bonus` compiles the bonus functions
> -   `make clean` deletes the `.o` files generated during compilation
> -   `make fclean` deletes the `.o` and the `libft.a` library file generated
> -   `make re` executes `fclean` and `all` in sequence, recompiling the library without the bonus functions
> -   `make rebonus` executes `fclean` and `bonus` in sequence, recompiling the library with the bonus functions

To use the library in your code you will need to include the header:

#include "libft.h" 

When compiling your own code with `libft`, don't forget to use the flags:

$> ... -lft -L path/to/libft.a -I path/to/libft.h
