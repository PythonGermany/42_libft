/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburgsta <rburgsta@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:33:24 by rburgsta          #+#    #+#             */
/*   Updated: 2023/01/05 08:17:59 by rburgsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * Checks if c is an alphabetical character
 * @param[in] c The character to be checked
 * @return 1 if true otherwise 0
  */
int		ft_isalpha(int c);

/**
 * Checks if c is a numerical character
 * @param[in] c The character to be checked
 * @return 1 if true otherwise 0
  */
int		ft_isdigit(int c);

/**
 * Checks if c is an alphabetical or numerical character
 * @param[in] c The character to be checked
 * @return 1 if true otherwise 0
  */
int		ft_isalnum(int c);

/**
 * Checks if c is a 7-bit unsigned char that fits into the ASCII set
 * @param[in] c The character to be checked
 * @return 1 if true otherwise 0
  */
int		ft_isascii(int c);

/**
 * Checks if c is a printable character
 * @param[in] c The character to be checked
 * @return 1 if true otherwise 0
  */
int		ft_isprint(int c);

/** 
 * Calculates the length a string
 * @param[in] s The string to be measured
 * @return The length of the string
 */
size_t	ft_strlen(const char *s);

/** 
 * Fills memory with a constant byte
 * @param[in] b Pointer to the memory area
 * @param[in] c The constant byte
 * @param[in] n The number of bytes to be filled
 * @return Pointer to the memory area b
 */
void	*ft_memset(void *b, int c, size_t len);

/** 
 * Erases n bytes of data pointed to by s 
 * @param[in] s Pointer to the data
 * @param[in] n Number of bytes to be erased
 */
void	ft_bzero(void *s, size_t n);

/** 
 * Copies a memory area. The memory areas must not overlap
 * @param[in] dst The destination memory area
 * @param[in] src The source memory area
 * @param[in] n The number of bytes to be copied
 * @return Pointer to the memory area dst
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/** 
 * Copies a memory area. The memory areas may overlap
 * @param[in] dst The destination memory area
 * @param[in] src The source memory area
 * @param[in] n The number of bytes to be copied
 * @return Pointer to the memory area dst
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/** 
 * Copies up to size - 1 characters from the NULL-terminated string src to 
 * dst, NULL-terminating the result
 * @param[in] dst Pointer to the destination
 * @param[in] src Pointer to the source string
 * @param[in] dstsize The amount of bytes in memory available at dst
 * @return The total length of the string the function tried to create
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/** 
 * Appends the NULL-terminated string src to the end of dst. It will append 
 * at most size - strlen(dst) - 1 bytes, NULL-terminating the result
 * @param[in] dst Pointer to the destination
 * @param[in] src Pointer to the source string
 * @param[in] dstsize The amount of bytes in memory available at dst
 * @return The total length of the string the function tried to create
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * Converts c to uppercase
 * @param[in] c The character to be converted
 * @return The converted character
  */
int		ft_toupper(int c);

/**
 * Converts c to lowercase
 * @param[in] c The character to be converted
 * @return The converted character
  */
int		ft_tolower(int c);

/** 
 * Locates a character in a string
 * @param[in] s The string to be searched
 * @param[in] c The character that will be searched for
 * @return Ponter to the first occurence of the character c in the string s. 
 * NULL if c is not found in s
 */
char	*ft_strchr(const char *s, int c);

/** 
 * Locates a character in a string
 * @param[in] s The string to be searched
 * @param[in] c The character that will be searched for
 * @return Ponter to the last occurence of the character c in the string s. 
 * NULL if c is not found in s
 */
char	*ft_strrchr(const char *s, int c);

/** 
 * Compares two strings
 * @param[in] s1 The first string
 * @param[in] s2 The second string
 * @param[in] n The number of bytes to be compared
 * @return The difference of the first not matching pair of characters 
 * or NULL if the strings match
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/** 
 * Scans memory for a character
 * @param[in] s The memory area to be searched
 * @param[in] c The character that will be searched for
 * @param[in] n The number of bytes that will be searched
 * @return Pointer to the first matching byte or 0 if the character does 
 * not occur in the given memory area
 */
void	*ft_memchr(const void *s, int c, size_t n);

/** 
 * Compares two memory areas
 * @param[in] s1 The first memory area
 * @param[in] s2 The second memory area
 * @param[in] n The number of bytes to be compared
 * @return The difference of the first not matching pair of characters 
 * or 0 if the memory areas match
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/** 
 * Locates a substring in a string
 * @param[in] haystack The string that will be searched for the substring
 * @param[in] needle The substring
 * @param[in] len The number of characters that will be searched 
 * for the substring
 * @return If the substring is an empty string, haystack is returned. 
 * If the substring is not found, NULL is returned. 
 * Otherwise a pointer to the first character of the first occurrence of the 
 * substring is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/** 
 * Converts a string to an integer
 * @param[in] str The string to be converted
 * @return The converted string
 */
int		ft_atoi(const char *str);

/** 
 * Allocated memory for an array of of count elements of size bytes each
 * @param[in] count The number of allocated elements
 * @param[in] size The size of each element
 * @return Pointer to the allocated memory
 */
void	*ft_calloc(size_t count, size_t size);

/** 
 * Duplicates a string by allocating memory with malloc(3)
 * @param[in] s1 The string to be duplicated
 * @return Pointer to the duplicated string
 */
char	*ft_strdup(const char *s1);

/** 
 * Allocates (with malloc(3)) and returns a substring from the string s. 
 * The substring begins at index start and is of maximum size len.
 * @param[in] s The string from which to create the substring
 * @param[in] start The start index of the substring in the string s
 * @param[in] len The maximum length of the substring
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/** 
 * Allocates (with malloc(3)) and returns a new string, which is the result 
 * of the concatenation of s1 and s2
 * @param[in] s1 The prefix string
 * @param[in] s2 The suffix string
 * @return The new string. NULL if the allocation fails
 */
char	*ft_strjoin(char const *s1, char const *s2);

/** 
 * Allocates (with malloc(3)) and returns a copy of s1 with the characters 
 * specified in ’set’ removed from the beginning and the end of the string
 * @param[in] s1 The string to be trimmed
 * @param[in] set 
 * @return The trimmed string. NULL if the allocation fails
 */
char	*ft_strtrim(char const *s1, char const *set);

/** 
 * Allocates (with malloc(3)) and returns an array of strings obtained by 
 * splitting s using the character c as a delimiter. The array must end 
 * with a NULL pointer
 * @param[in] s The string to be split
 * @param[in] c The delimiter character
 * @return The array of new strings resulting from the split. NULL if 
 * the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * Converts integer n to it's string representation
 * @param[in] n The number to be converted
 * @return The converted number
  */
char	*ft_itoa(int n);

/** 
 * Applies the function f to each character of the string s, and passing its 
 * index as first argument to create a new string (with malloc(3)) resulting 
 * from successive applications of f
 * @param[in] s The string on which to iterate
 * @param[in] f The function to apply to each character
 * @return The string created from the successive applications of f. Returns 
 * NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/** 
 * Applies the function f on each character of the string passed as argument, 
 * passing its index as first argument. Each character is passed by address 
 * to f to be modified if necessary
 * @param[in] s The string on which to iterate
 * @param[in] f The function to apply to each character
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/** 
 * Outputs the character c to the given file descriptor
 * @param[in] c The character to output
 * @param[in] fd The file descriptor on which to write
 */
void	ft_putchar_fd(char c, int fd);

/** 
 * Outputs the string s to the given file descriptor
 * @param[in] s The string to output
 * @param[in] fd The file descriptor on which to write
 */
void	ft_putstr_fd(char *s, int fd);

/** 
 * Outputs the string s to the given file descriptor followed by a new line
 * @param[in] s The string to output
 * @param[in] fd The file descriptor on which to write
 */
void	ft_putendl_fd(char *s, int fd);

/** 
 * Outputs the integer n to the given file descriptor
 * @param[in] n The number to output
 * @param[in] fd The file descriptor on which to write
 */
void	ft_putnbr_fd(int n, int fd);

/** 
 * Allocates (with malloc(3)) and returns a new node.
 * @param[in] content The value the member variable of the node will be set to
 * @return The new node
 */
t_list	*ft_lstnew(void *content);

/** 
 * Adds the node ’new’ at the beginning of the list.
 * @param[in] lst The address of a pointer to the first link of a list
 * @param[in] new The address of a pointer to the node to be added to the list
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/** 
 * Counts the number of nodes in a list
 * @param[in] lst The beginning of the list
 * @return The length of the list
 */
int		ft_lstsize(t_list *lst);

/** 
 * Returns the last node of the list
 * @param[in] lst The beginning of the list
 * @return The last node of the list
 */
t_list	*ft_lstlast(t_list *lst);

/** 
 * Adds the node ’new’ at the end of the list.
 * @param[in] lst The address of a pointer to the first link of a list
 * @param[in] new The address of a pointer to the node to be added to the list
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/** 
 * Frees the node's lst content
 * @param[in] lst The node to free
 * @param[in] del The address of the function used to delete the content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/** 
 * Deletes and frees the list pointed to by lst, using the 
 * function del and free(3)
 * @param[in] lst The address of a pointer to the first link of a list
 * @param[in] del The address of the function used to delete 
 * the content of the node
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/** 
 * Iterates lst and applies the function f on the content of each node
 * @param[in] lst The address of a pointer to a node
 * @param[in] f The address of the function used to iterate on the list
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/** 
 * Iterates the list lst and applies the function f on the content of each 
 * node. Creates a new list resulting of the successive applications of the 
 * function f. The del function is used to delete the content of a node if 
 * needed.
 * @param[in] lst The address of a pointer to a node
 * @param[in] f The address of the function used to iterate on the list
 * @param[in] del The address of the function used to delete the content of a 
 * node if needed
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/** 
 * Same as the original printf, supports the format cspdiuxX%
 * @param[in] format The Format of the printed string
 * @return The length of the printed string
 */
int		ft_printf(const char *format, ...);

/** 
 * Reads on line from file descriptor fd
 * @param[in] fd The file descriptor to be read from
 * @return A pointer to the read line or NULL if there is nothing else 
 * to read or an error occurred
 */
char	*get_next_line(int fd);
#endif