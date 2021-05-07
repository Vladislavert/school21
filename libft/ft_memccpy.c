/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:13:32 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 22:47:32 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t count;
	unsigned char *dst1;
	unsigned char *src1;

	count = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (count < n)
	{
		if (src1[count] != (unsigned char)c)
		{
			dst1[count] = src1[count];
			count++;
		}
		else
			break ;
	}
	return (dst1);
}
