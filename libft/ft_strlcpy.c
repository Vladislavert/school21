/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:17:05 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/10 14:40:48 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t count;

	if (!dst || !src)
		return (0);
	count = 0;
	if  (size > 0)
	{
		while (count < (size - 1) && *(src + count))
		{
			*(dst + count) = *(src + count);
			count++;
		}
		*(dst + count) = '\0';
	}
	return (ft_strlen(src));
}
