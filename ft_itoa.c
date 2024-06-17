/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:35:25 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/14 21:10:22 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	character_count(int x)
{
	size_t	count;

	if (x < 0)
		count = 2;
	else
		count = 1;
	x /= 10;
	while (x != 0)
	{
		count++;
		x /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t			char_count;
	char			*num;
	unsigned int	abs_n;
	size_t			i;

	char_count = character_count(n);
	num = (char *)malloc(char_count + 1);
	if (!num)
		return (NULL);
	num[char_count] = '\0';
	abs_n = (unsigned int)n;
	if (n < 0)
	{
		num[0] = '-';
		abs_n = -(unsigned int)n;
	}
	i = char_count - 1;
	if (n == 0)
		num[i] = '0';
	while (abs_n != 0)
	{
		num[i--] = (abs_n % 10) + '0';
		abs_n /= 10;
	}
	return (num);
}
