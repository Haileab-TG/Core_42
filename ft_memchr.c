/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htesfama <htesfama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 00:44:29 by htesfama          #+#    #+#             */
/*   Updated: 2023/01/05 00:44:29 by htesfama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    char *chrPtr = s;
    while (i < n)
    {
       if((char) c == chrPtr[i]){
            return s + i;
       }
    }
    return (NULL);
    
}
