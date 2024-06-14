/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:15:27 by francios          #+#    #+#             */
/*   Updated: 2024/06/09 23:22:51 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes a string from which to create a substring from a start position of the string with a length of len

#include <stdio.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;

    if(!s)
        return (NULL);
    if (ft_strlen(s + start) < len)
        len = (ft_strlen(s + start));
    ptr = malloc(len + 1);
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s + start, len + 1);
    return (ptr);

}