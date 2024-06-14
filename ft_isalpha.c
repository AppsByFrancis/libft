/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:19:05 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/08 01:50:14 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

// IF int is in the range of alpha, return 1
// else 0
int	ft_isalpha(int a)
{
	return ((a >= 65 && a <= 90) || (a >= 97 && a <= 122));
}

// int main ()
// {
// 	char	a;
// 	int		x;

// 	a = '1';
// 	x = ft_isalpha(a);
// 	printf("%d", x);
// 	return (0);
// }
