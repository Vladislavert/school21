/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:12:54 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:12:55 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;
	unsigned char *str;

	count = 0;
	str = (unsigned char *)dst;
	while (count < n)
	{
		str[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (str);
}
