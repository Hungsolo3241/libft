/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:15 by kamako            #+#    #+#             */
/*   Updated: 2019/05/20 16:58:03 by kamako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void		ft_putchar(char);
void		ft_putstr(char *);
int			ft-strlen(char *);
char		*ft_strcpy(char *, char *);
char		*ft_strdup(char *);
int			ft_memcmp(const void *, const void *, size_t);
char		*ft_strncpy(char *, char *, int);
char		*ft_strcat(char *, char *);
char		*ft_strncat(char *, char *, int);
void		*ft_memset(void *, int, size_t);
void		ft_bzero(char *, int);
void *		ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char *		ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char *		ft_strmap(char const *s, char (*f)(char));
char *		ft_strmapi(char const *s, char(*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char *		ft_strsub(char const *s, unsigned int start, size_t len);
char *		ft_strjoin(char const *s1, char const *s2);
char *		ft_strtrim(char const *s);
char **		ft_strsplit(char const *s, char c);
char *		ft_itoa(int n);
void		ft_putchar(char c);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putchar_fd(char const *s, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
