# 1337-42-libft
During my curriculum, it is forbidden to use pre-compiled functions, only some of them are allowed on each project, for example printf not authorized and all the functions of the string.h library.  
Libft is the first project of the curriculum that requires in the first part to re-code a set of libc functions, as defined in their manual, and in the second part to code a set of functions that are not included in the libc and the bonus part to code certain functions to deal with the linked list, after that you can use this library for the following projects and you can also add more useful functions.

[For more info about the project click here](https://github.com/oulhafiane/1337-42-libft/blob/master/libft.en.pdf)

## First Part
##### We must re-code the following functions :  
memset, bzero, memcpy, memccpy, memmove, memchr, memcmp, strlen, strdup, strcpy, strncpy, strcat, strncat, strlcat, strchr, strrchr, strstr, strnstr, strcmp, strncmp, atoi, isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower.

## Second Part
#### ft_memalloc
Allocates (with malloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.
#### ft_memdel
Takes as a parameter the address of a memory area that needs
to be freed with free(3), then puts the pointer to NULL.
NULL.
#### ft_strnew
Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at
’\0’. If the allocation fails the function returns NULL.
#### ft_strdel
Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL.
to NULL.
#### ft_strclr
Sets every character of the string to the value ’\0’.
10
#### ft_striter
Applies the function f to each character of the string passed
as argument. Each character is passed by address to f to be
modified if necessary.
#### ft_striteri
Applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each
character is passed by address to f to be modified if necessary.
#### ft_strmap
Applies the function f to each character of the string given
as argument to create a “fresh” new string (with malloc(3))
resulting from the successive applications of f.
#### ft_strmapi
(*f)(unsigned int, char));
Applies the function f to each character of the string passed
as argument by giving its index as first argument to create a
“fresh” new string (with malloc(3)) resulting from the successive applications of f.
#### ft_strequ
Lexicographical comparison between s1 and s2. If the 2
strings are identical the function returns 1, or 0 otherwise.
#### ft_strnequ
Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical,
the function returns 1, or 0 otherwise.
#### ft_strsub
Allocates (with malloc(3)) and returns a “fresh” substring
from the string given as argument. The substring begins at
indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the
allocation fails, the function returns NULL.
#### ft_strjoin
Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If
the allocation fails the function returns NULL.
12
#### ft_strtrim
Allocates (with malloc(3)) and returns a copy of the string
given as argument without whitespaces at the beginning or at
the end of the string. Will be considered as whitespaces the
following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a
copy of s. If the allocation fails the function returns NULL.
#### ft_strsplit
Allocates (with malloc(3)) and returns an array of “fresh”
strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL.  
Example: ft_strsplit("\*hello\*fellow\*\*\*\*students\*", ’\*’) returns the array ["hello", "fellow", "students"].
#### ft_itoa
Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument.
Negative numbers must be supported. If the allocation fails,
the function returns NULL.
#### ft_putchar
Outputs the character c to the standard output.
#### ft_putstr
Outputs the string s to the standard output.
#### ft_putendl
Outputs the string s to the standard output followed by a ’\n’.
#### ft_putnbr
Outputs the integer n to the standard output.
#### ft_putchar_fd
Outputs the char c to the file descriptor fd.
#### ft_putstr_fd
Outputs the string s to the file descriptor fd.
#### ft_putendl_fd
Outputs the string s to the file descriptor fd followed by a ’\n’.
#### ft_putnbr_fd
Outputs the integer n to the file descriptor fd.
