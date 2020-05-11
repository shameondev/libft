/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:51:07 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:15:26 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 10
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdarg.h>
# include <wchar.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_arr
{
	int				fd;
	char			*rest;
	struct s_arr	*next;
}					t_arr;

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);
int					ft_atoi(const char *str);
int					ft_arr_max_val(int *arr, int len);
int					get_next_line(const int fd, char **line);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t len);
char				*ft_itoa(int nbr);
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *s);
char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strstr(const char *str, const char *searchstr);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *restrict s1, const char *restrict s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *restrict s1, const char *restrict s2,
					size_t len);
char				*ft_strnstr(const char *str, const char *searchstri,
					size_t len);
void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_strclr(char *s);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_putstr(char const *s);
void				*ft_memalloc(size_t size);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_bzero(void *ptr, size_t len);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_striter(char *s, void(*f)(char*));
void				ft_lstadd(t_list **alst, t_list *new);
void				*ft_memset(void *b, int val, size_t len);
void				*ft_memchr(const void *s, int c, size_t len);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_striteri(char *s, void(f)(unsigned int, char*));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				*ft_memccpy(void *destination, const void *source,
					int c, size_t len);
void				*ft_memcpy(void *destination, const void *source,
					size_t len);
void				*ft_memmove(void *destination, const void *source,
					size_t len);
size_t				ft_strlen(const char *s);
size_t				ft_nbrlen(int nbr, int base);
size_t				ft_wdlen(char const *s, char c);
size_t				ft_wscount(char const *s, char c);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem));
#endif
