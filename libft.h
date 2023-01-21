/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <ade-orma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 04:09:00 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/21 12:15:20 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_bzero(void *str, size_t s);
void	*ft_memchr(const void *str, int c, size_t nBytes);
int		ft_memcmp(const void *str1, const void *str2, size_t nBytes);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *to, const void *from, size_t nBytes);
void	*ft_memmove(void *to, const void *from, size_t nBytes);
void	*ft_calloc(size_t count, size_t nBytes);
char	*ft_strdup(const char *str1);

#endif
