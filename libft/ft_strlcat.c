/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:01:19 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 20:30:25 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	size;
	size_t	index_start;
	size_t	length;

	length = ft_strlen(dst);
	if (dstsize > length)
		size = dstsize - length - 1;
	else
		return (ft_strlen(src) + dstsize);
	count = 0;
	index_start = length;
	while (count < size && src[count])
	{
		dst[index_start] = src[count];
		index_start++;
		count++;
	}
	dst[index_start] = '\0';
	return (ft_strlen(src) + length);
}