/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:46:24 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/14 21:04:55 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns pointer to the first encounter
// of a char that its looking for in a string
// if we dont cast it to char, it returns char * as well,
// but we should explicitly cast it
// since the return value of the function is char *
// if we return &str, we return the pointer to the char but in int

char	*ft_strchr(const char *str, int x)
{
	char	c;

	if (str == NULL)
		return (NULL);
	c = (char)x;
	while (*str && *str != c)
	{
		str++;
	}
	if (*str == c)
	{
		return ((char *)str);
	}
	return (NULL);
}
