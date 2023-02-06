/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_append_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:12:30 by kfujita           #+#    #+#             */
/*   Updated: 2023/02/06 23:05:05 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vect.h"

#include "../ft_math/ft_math.h"
#include "../ft_mem/ft_mem.h"

bool	vect_append_range(t_vect *vect, void *value, size_t count)
{
	size_t	bytes_to_copy;
	size_t	new_len;

	if (!can_mulp(vect->elemsize, count))
		return (false);
	if (!can_addp(vect->len, count))
		return (false);
	new_len = vect->len + count;
	if (vect->cap < new_len && !vect_reserve(vect, new_len))
		return (false);
	bytes_to_copy = vect->elemsize * count;
	ft_memmove(((unsigned char *)vect->p) + (vect->len * vect->elemsize),
		value, bytes_to_copy);
	vect->len = new_len;
	return (true);
}
