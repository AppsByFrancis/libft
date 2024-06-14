/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:28:12 by francios          #+#    #+#             */
/*   Updated: 2024/06/09 23:59:32 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

char	*ft_strrchr(const char *str, int x)
{
	char	*last_c;

	last_c = NULL;
	while (*str)
	{
		if (*str == (char)x)
			last_c = (char *)str;
		str++;
	}
	if (*str == '\0' && x == 0)
		last_c = (char *)str;
	return (last_c);
}

// int main ()
// {
//     char str[] = "pepa";

//     printf("%s", ft_strrchr(str, 'a'));

//     return (0);
// }
