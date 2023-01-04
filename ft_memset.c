/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htesfama <htesfama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 00:28:51 by htesfama          #+#    #+#             */
/*   Updated: 2023/01/05 00:28:51 by htesfama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t n)
{
    size_t i = 0;
    char *chrPtr = (char *) b;
    while (i < n)
    {
        *chrPtr = (char) c;
        i++;
        chrPtr++;
    }
    return b;
}