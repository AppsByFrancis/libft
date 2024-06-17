/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:36:37 by francios          #+#    #+#             */
/*   Updated: 2024/06/14 21:05:41 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	char	*s;

	s = (char *)src;
	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(s);
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = s[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
