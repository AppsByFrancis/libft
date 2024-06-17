/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 00:19:21 by francios          #+#    #+#             */
/*   Updated: 2024/06/14 21:06:38 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if val < 0 - str 1 < str 2
// if val > 0 - str 1 > str 2
// if val = 0 - str 1 = str 2

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && i < size - 1)
		i++;
	return ((unsigned int)(str1[i]) - (unsigned int)(str2[i]));
}
