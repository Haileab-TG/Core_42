/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htesfama <htesfama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 23:01:10 by htesfama          #+#    #+#             */
/*   Updated: 2023/01/04 23:01:10 by htesfama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t c = 1;
    while((c <= n) && (*s1 != '\0' || *s2 != '\0'))
    {
        if(*s1 != *s2)
        {
            return ((int) *s1 - *s2);
        }
        s1++;
        s2++;
        c++;
    }
    return 0;
}