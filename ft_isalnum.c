/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:46:46 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/07 21:59:21 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

// a-z A-Z 0-9
int	ft_isalnum(int a)
{
	return ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || (a >= 48
			&& a <= 57));
}

/* int main ()
{
	char	a;
	int		x;

	a = '9';
	x = ft_isalnum(a);
	printf("%d", x);
	return (0);
}
 */