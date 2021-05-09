/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:12:54 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 16:59:50 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;
	unsigned char *str;
	unsigned char *src1;

	if (dst == src)
		return (dst);
	count = 0;
	str = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (count < n)
	{
		str[count] = src1[count];
		count++;
	}
	return (str);
}
