/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:05:58 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/14 20:59:16 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t object_count, size_t object_size)
{
	void	*ptr;

	if (object_count <= 0 || object_size <= 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if ((object_count * object_size) / object_size != object_count)
		return (NULL);
	ptr = malloc(object_count * object_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, object_count * object_size);
	return (ptr);
}
