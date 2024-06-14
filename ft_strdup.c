/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:41:23 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/09 23:21:14 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// alocates memory for new variable where to copy the string

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	if (!s1)
		return (NULL);
	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}