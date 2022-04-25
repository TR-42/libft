/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:37:46 by kfujita           #+#    #+#             */
/*   Updated: 2022/04/25 23:42:50 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Dependency:
// - size_t
# include <stddef.h>

// ft_is*
# include "ft_is/ft_is.h"

// lst
# include "ft_lst/ft_lst.h"

// memory
# include "ft_mem/ft_mem.h"

// printf
# include "ft_printf/ft_printf.h"

// string
# include "ft_string/ft_string.h"

// Libft-01
int		ft_toupper(int c);
int		ft_tolower(int c);

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
