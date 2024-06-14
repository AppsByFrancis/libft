/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:38:12 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/07 21:59:29 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// returns 1 if its in the range of 0 to 9 else returns 0
int	ft_isdigit(int a)
{
	return (a >= 48 && a <= 57);
}

/* int main ()
{
	char	a;
	int		x;

	a = '9';
	x = ft_isdigit(a);
	printf("%d", x);
	return (0);
}

 */
