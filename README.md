# libft

  

This project is about coding a C library.

It will contain a lot of general purpose functions your programs will rely upon.

<img  src="https://github.com/zakarm/libft/blob/main/imgs/img.png"  width="100" />

----------------------------------------------------------------------------------------------------------

<h3>💻 Mandatory Part</h2>

> <h4>Part 1 - Libc functions</h4>

To begin, you must redo a set of functions from the libc. Your functions will have the

same prototypes and implement the same behaviors as the originals. They must comply

with the way they are defined in their man. The only difference will be their names. They

will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

*Here's a brief description of each :*

 1. isalpha: returns a non-zero value if the argument is an alphabetic
    character, otherwise 0.
 2. isdigit: returns a non-zero value if the argument is a digit
    character, otherwise 0.
 3. isalnum: returns a non-zero value if the argument is an alphanumeric
    character, otherwise 0.
 4. isascii: returns a non-zero value if the argument is an ASCII
    character, otherwise 0.
 5. isprint: returns a non-zero value if the argument is a printable
    character, otherwise 0.
 6. strlen: returns the length of a given string.
 7. memset: fills the first n bytes of the memory pointed to by s with
    the constant byte c.
 8. bzero: sets the first n bytes of the memory pointed to by s to 0.
 9. memcpy: copies n bytes from memory area src to memory area dest.
 10. memmove: copies n bytes from memory area src to memory area dest
     even if the memory areas overlap.
 11. strlcpy: similar to strcpy, but with a specified buffer size limit,
     designed to prevent buffer overflow.
 12. strlcat: similar to strcat, but with a specified buffer size limit,
     designed to prevent buffer overflow.
 13. toupper: converts an alphabetic character to uppercase.
 14. tolower: converts an alphabetic character to lowercase.
 15. strchr: locates the first occurrence of c in string s.
 16. strrchr: locates the last occurrence of c in string s.
 17. strncmp: compares up to n characters of two strings.
 18. memchr: locates the first occurrence of c in the first n bytes of
     the memory area pointed to by s.
 19. memcmp: compares the first n bytes of two memory areas.
 20. strnstr: locates the first occurrence of the null-terminated string
     needle in the string haystack, limited to n characters.
 21. atoi: converts a string to an integer.

  
  

> <h4>Part 2 - Additional functions</h4>

In this second part, you must develop a set of functions that are either not in the libc,

or that are part of it but in a different form.

 1. ft_strtrim: Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
 2. ft_strjoin: Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
 3. ft_substr: Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
 4. ft_split: Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.
 5. ft_itoa: Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
 6. ft_putchar_fd: Outputs the character ’c’ to the given file descriptor.
 7. ft_strmapi: Applies the function ’f’ to each character of the string  ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
 8. ft_striteri: Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.
 9. ft_putstr_fd: Outputs the string ’s’ to the given file descriptor.
 10. ft_putendl_fd: Outputs the string ’s’ to the given file descriptor followed by a newline.
 11. ft_putnbr_fd: Outputs the integer ’n’ to the given file descriptor.

----------------------------------------------------------------------------------------------------------

<h3>🔥 Bonus part</h2>

Functions to manipulate memory and strings is very useful. But you will soon discover
that manipulating lists is even more useful.
You have to use the following structure to represent a node of your list. Add its
declaration to your libft.h file:

```

typedef struct s_list

{

void *content;

struct s_list *next;

} t_list;

```

  

- content: The data contained in the node. void * allows to store any kind of data.
- next: The address of the next node, or NULL if the next node is the last one.

 1. ft_lstnew: Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable 'next’ is initialized to NULL.
 2. ft_lstadd_front: Adds the node ’new’ at the beginning of the list.
 3. ft_lstsize: Counts the number of nodes in a list.
 4. ft_lstlast: Returns the last node of the list.
 5. ft_lstdelone: Takes as a parameter a node and frees the memory of
    the node’s content using the function ’del’ given as a parameter and
    free the node. The memory of ’next’ must not be freed.
 6. ft_lstclear: Deletes and frees the given node and every successor of
    that node, using the function ’del’ and free(3). Finally, the
    pointer to the list must be set to NULL.
 7. ft_lstiter: Iterates the list ’lst’ and applies the function ’f’ on
    the content of each node.
 8. ft_lstmap: Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
