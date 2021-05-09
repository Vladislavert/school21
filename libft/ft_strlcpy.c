/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:17:05 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 16:44:17 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size) // проверить правильность написания функции
{
	size_t count;

	if (!dst || !src)
		return (0);
	count = 0;
	while (count < (size - 1) && *(src + count))
	{
		*(dst + count) = *(src + count);
		count++;
	}
	*(dst + count) = '\0';
	return (count - 1);
}
