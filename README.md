# **Libft**

### Functions from `<ctype.h>`

-   [`ft_isalpha`](https://github.com/sklloyd/libft/blob/main/ft_isalpha.c) - checks for an alphabetic character
-   [`ft_isdigit`](https://github.com/sklloyd/libft/blob/main/ft_isdigit.c) - checks for a digit (0 through 9).
-   [`ft_isalnum`](https://github.com/sklloyd/libft/blob/main/ft_isalnum.c) - checks for an alphanumeric character
-   [`ft_isascii`](https://github.com/sklloyd/libft/blob/main/ft_isascii.c) - checks whether c fits into the ASCII character set
-   [`ft_isprint`](https://github.com/sklloyd/libft/blob/main/ft_isprint.c) - checks for any printable character
-   [`ft_toupper`](https://github.com/sklloyd/libft/blob/main/ft_toupper.c) - convert char to uppercase
-   [`ft_tolower`](https://github.com/sklloyd/libft/blob/main/ft_tolower.c) - convert char to lowercase

### Functions from `<string.h>`

-   [`ft_memset`](https://github.com/sklloyd/libft/blob/main/ft_memset.c) - fill memory with a constant byte
-   [`ft_strlen`](https://github.com/sklloyd/libft/blob/main/ft_strlen.c) - calculate the length of a string
-   [`ft_bzero`](https://github.com/sklloyd/libft/blob/main/ft_bzero.c) - zero a byte string
-   [`ft_memcpy`](https://github.com/sklloyd/libft/blob/main/ft_memcpy.c) - copy memory area
-   [`ft_memmove`](https://github.com/sklloyd/libft/blob/main/ft_memmove.c) - copy memory area
-   [`ft_strlcpy`](https://github.com/sklloyd/libft/blob/main/ft_strlcpy.c) - copy string to an specific size
-   [`ft_strlcat`](https://github.com/sklloyd/libft/blob/main/ft_strlcat.c) - concatenate string to an specific size
-   [`ft_strchr`](https://github.com/sklloyd/libft/blob/main/ft_strchr.c) - locate character in string
-   [`ft_strrchr`](https://github.com/sklloyd/libft/blob/main/ft_strrchr.c) - locate character in string
-   [`ft_strncmp`](https://github.com/sklloyd/libft/blob/main/ft_strncmp.c) - compare two strings
-   [`ft_memchr`](https://github.com/sklloyd/libft/blob/main/ft_memchr.c) - scan memory for a character
-   [`ft_memcmp`](https://github.com/sklloyd/libft/blob/main/ft_memcmp.c) - compare memory areas
-   [`ft_strnstr`](https://github.com/sklloyd/libft/blob/main/ft_strnstr.c) - locate a substring in a string
-   [`ft_strdup`](https://github.com/sklloyd/libft/blob/main/ft_strdup.c) - creates a dupplicate for the string passed as parameter

### Functions from `<stdlib.h>`

-   [`ft_atoi`](https://github.com/sklloyd/libft/blob/main/ft_atoi.c) - convert a string to an integer
-   [`ft_calloc`](https://github.com/sklloyd/libft/blob/main/ft_calloc.c) - allocates memory and sets its bytes' values to 0

### Non-standard functions

-   [`ft_substr`](https://github.com/sklloyd/libft/blob/main/ft_substr.c) - returns a substring from a string
-   [`ft_strjoin`](https://github.com/sklloyd/libft/blob/main/ft_strjoin.c) - concatenates two strings
-   [`ft_strtrim`](https://github.com/sklloyd/libft/blob/main/ft_strtrim.c) - trims the beginning and end of string with specific set of chars
-   [`ft_split`](https://github.com/sklloyd/libft/blob/main/ft_split.c) - splits a string using a char as parameter
-   [`ft_itoa`](https://github.com/sklloyd/libft/blob/main/ft_itoa.c) - converts a number into a string
-   [`ft_strmapi`](https://github.com/sklloyd/libft/blob/main/ft_strmapi.c) - applies a function to each character of a string
-   [`ft_striteri`](https://github.com/sklloyd/libft/blob/main/ft_striteri.c) - applies a function to each character of a string
-   [`ft_putchar_fd`](https://github.com/sklloyd/libft/blob/main/ft_putchar_fd.c) - output a char to a file descriptor
-   [`ft_putstr_fd`](https://github.com/sklloyd/libft/blob/main/ft_putstr_fd.c) - output a string to a file descriptor
-   [`ft_putendl_fd`](https://github.com/sklloyd/libft/blob/main/ft_putendl_fd.c) - output a string to a file descriptor, followed by a new line
-   [`ft_putnbr_fd`](https://github.com/sklloyd/libft/blob/main/ft_putnbr_fd.c) - output a number to a file descriptor

### Linked list functions

-   [`ft_lstnew`](https://github.com/sklloyd/libft/blob/main/ft_lstnew.c) - creates a new list element
-   [`ft_lstadd_front`](https://github.com/sklloyd/libft/blob/main/ft_lstadd_front.c) - adds an element at the beginning of a list
-   [`ft_lstsize`](https://github.com/sklloyd/libft/blob/main/ft_lstsize.c) - counts the number of elements in a list
-   [`ft_lstlast`](https://github.com/sklloyd/libft/blob/main/ft_lstlast.c) - returns the last element of the list
-   [`ft_lstadd_back`](https://github.com/sklloyd/libft/blob/main/ft_lstadd_back.c) - adds an element at the end of a list
-   [`ft_lstclear`](https://github.com/sklloyd/libft/blob/main/ft_lstclear.c) - deletes and free list
-   [`ft_lstiter`](https://github.com/sklloyd/libft/blob/main/ft_lstiter.c) - applies a function to each element of a list
-   [`ft_lstmap`](https://github.com/sklloyd/libft/blob/main/ft_lstmap.c) - applies a function to each element of a list

----------

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
