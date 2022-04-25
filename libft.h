/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:37:46 by kfujita           #+#    #+#             */
/*   Updated: 2022/04/25 23:34:39 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Dependency:
// - size_t
# include <stddef.h>

// - bool
# include <stdbool.h>

// ft_is*
# include "ft_is/ft_is.h"

// lst
# include "ft_lst/ft_lst.h"

// printf
# include "ft_printf/ft_printf.h"

// string
# include "ft_string/ft_string.h"

// Libft-00
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);

// Libft-01
int		ft_toupper(int c);
int		ft_tolower(int c);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// Libft-02 (Libc functions)
void	*ft_calloc(size_t count, size_t size);

// libft-03
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Additional Functions (from libc)

// Additional Functions (original)
int		ft_min(int a, int b);
long	ft_minl(long a, long b);
size_t	ft_minp(size_t a, size_t b);
double	ft_minf(double a, double b);

int		ft_max(int a, int b);
long	ft_maxl(long a, long b);
size_t	ft_maxp(size_t a, size_t b);
double	ft_maxf(double a, double b);

#endif
