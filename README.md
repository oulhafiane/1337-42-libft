# 1337-42-libft
During my curriculum, it is forbidden to use pre-compiled functions, only some of them are allowed on each project, for example printf not authorized and all the functions of the string.h library.  
Libft is the first project of the curriculum that requires in the first part to re-code a set of libc functions, as defined in their manual, and in the second part to code a set of functions that are not included in the libc and the bonus part to code certain functions to deal with the linked list, after that you can use this library for the following projects and you can also add more useful functions.

[For more info about the project click here](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/libft.en.pdf)

![First Part](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/first_part.png?raw=true)
### We must re-code the following functions :  
memset, bzero, memcpy, memccpy, memmove, memchr, memcmp, strlen, strdup, strcpy, strncpy, strcat, strncat, strlcat, strchr, strrchr, strstr, strnstr, strcmp, strncmp, atoi, isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower.

![Second Part](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/second_part.png?raw=true)
### We must code the following functions : 

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

![Bonus Part](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/bonus_part.png?raw=true)
### We must code the following functions :  

#### ft_lstnew
Allocates (with malloc(3)) and returns a “fresh” link. The
variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to
NULL and the variable content_size is initialized to 0 even
if the parameter content_size isn’t. The variable next is
initialized to NULL. If the allocation fails, the function returns
NULL.
#### ft_lstdelone
Takes as a parameter a link’s pointer address and frees the
memory of the link’s content using the function del given as
a parameter, then frees the link’s memory using free(3). The
memory of next must not be freed under any circumstance.
Finally, the pointer to the link that was just freed must be
set to NULL (quite similar to the function ft_memdel in the
mandatory part).
#### ft_lstdel
Takes as a parameter the adress of a pointer to a link and
frees the memory of this link and every successors of that link
using the functions del and free(3). Finally the pointer to
the link that was just freed must be set to NULL (quite similar
to the function ft_memdel from the mandatory part).
to be freed.
Libft Your first own library
#### ft_lstadd
Adds the element new at the beginning of the list.
#### ft_lstiter
Iterates the list lst and applies the function f to each link.
#### ft_lstmap
Iterates a list lst and applies the function f to each link to
create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL.

![Other functions](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/others.png?raw=true)
### Whenever i work on a new project, i need to add some useful functions to my library

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;get_next_line(const int fd, char \*\*line);
Read from a file descriptor line by line.  
It's a project on my curriculum [click here for more info](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/get_next_line.en.pdf)

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;free_gnl(int fd); 
Deallocates the allocated memory by get_next_line for the specific file descriptor given.

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_printf(const char \*format, ...);
I recoded the famous function called printf from the library stdio.h.  
I managed the following conversions : sSpdDioOuUxXcC.  
I managed the following flags : hh, h, l, ll, j, et z, #, 0, -, +, * and space.  
It's a project on my curriculum [click here for more info](https://github.com/oulhafiane/1337-42-libft/blob/master/resources/ft_printf.en.pdf)

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_printf_fd(int fd, const char \*format, ...);
It's the same thins as ft_printf but it has one more parameters.  
ft_printf writes to the standard output, but ft_printf_fd writes to the given file descriptor (int fd).  

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_nbrlen(int n)
Returns how many digits on the given integer parameter.

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_iswhitespace(int c);
Return true is the given parameter is a white space : **space** OR **'\t'** OR **'\n'** OR **'\v'** OR **'\f'** OR **'\r'**.

#### void&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_swap_pt(void \*\*pt1, void \*\*pt2);
Swap the addresses of the given parameters.

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_sqrt(int nb);
Returns the integer square root of a number (if it exists), or
0 if the square root is not an integer.

#### char&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\*\*ft_strsplit_ws(char const \*s);
Do the same thing as ft_strsplit, but this time the delimiter is one of the white spaces : **space** OR **'\t'** OR **'\n'** OR **'\v'** OR **'\f'** OR **'\r'**.

#### void&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_revtab(void \*\*tab, int len);
Reverse the order of the addresses pointed by the given parameter \*\*tab.

#### void&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_sorttab(void \*\*tab, int len, int (\*cmp)());
Applies the function cmp to each address pointed by given argument \*\*tab and sort it using the result of the return value.  
the function cmp must be a function to compare the value pointed by two pointers.

#### char&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\*\*ft_strtabdup(char \*\*tab);
Allocates sufficient memory for a copy of the array of strings given as argument, does the copy, and returns a pointer to it.  
The array of strings given as argument must finished with a NULL. (like the array returned by ft_strsplit).  
The pointer may subsequently be used as an argument to the function ft_free_strtab(char \*\*tab).

#### void&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_free_strtab(char \*\*tab);
Deallocates the memory allocation pointed to by each string of the array given as argument,  
And deallocates the memory allocation pointed to by the array given as argument.
The array of strings given as argument must finished with a NULL. (like the array returned by ft_strsplit).

#### int&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ft_strtablen(char \*\*tab);
Return the number of pointers stored in the array given as argument.  
The array of strings given as argument must finished with a NULL. (like the array returned by ft_strsplit).
