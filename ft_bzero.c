/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htesfama <htesfama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 01:08:00 by htesfama          #+#    #+#             */
/*   Updated: 2023/01/05 01:08:00 by htesfama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void bzero(void *s, size_t n)
{
    size_t i = 0;
    char *chrPtr = s;
    while (i < n)
    {
        *chrPtr = '\0';
        chrPtr++;
    }
    
}