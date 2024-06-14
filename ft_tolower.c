/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 01:54:09 by francios          #+#    #+#             */
/*   Updated: 2024/06/08 21:26:27 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int x)
{
	if (x >= 65 && x <= 90)
		x += 32;
	return (x);
}

// int	main(void)
// {
// 	char	x;

// 	x = 'A';
// 	printf("%c", ft_tolower(x));
// 	return (0);
// }
