/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 23:34:26 by francios          #+#    #+#             */
/*   Updated: 2024/06/14 21:11:37 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char delimiter)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == delimiter && *str)
			str++;
		if (*str != delimiter && *str)
		{
			count++;
			while (*str != delimiter && *str)
			{
				str++;
			}
		}
	}
	return (count);
}

static int	ft_allocate(char **array, int position, size_t size)
{
	int	i;

	i = 0;
	array[position] = (char *)malloc(size);
	if (array[position] == NULL)
	{
		while (i < position)
		{
			free(array[i++]);
		}
		free(array);
		return (1);
	}
	return (0);
}

static int	ft_fill_array(char **array, char const *s, char delimiter)
{
	size_t	str_len;
	int		j;

	j = 0;
	while (*s)
	{
		str_len = 0;
		while (*s && *s == delimiter)
			s++;
		while (*s && *s != delimiter)
		{
			s++;
			str_len++;
		}
		if (str_len)
		{
			if (ft_allocate(array, j, str_len + 1))
				return (1);
			ft_strlcpy(array[j], s - str_len, str_len + 1);
		}
		j++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array[count_words(s, c)] = NULL;
	if (ft_fill_array(array, s, c))
		return (NULL);
	return (array);
}
