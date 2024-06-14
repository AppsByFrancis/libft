/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:33:48 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/07 22:17:31 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	return (dest);
}

/* int	main(void)
{
	const char	src[] = "newstringggggggggggg";
	char		dest[] = "oldstring";

	ft_memmove(dest, src, 10);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return (0);
} */
