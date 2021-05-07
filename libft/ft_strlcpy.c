/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:17:05 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:27:00 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dct, char *src, size_t size) // проверить правильность написания функции
{
	size_t count;

	count = 0;
	while (count < size)
	{
		*(dct + count) = *(src + count);
		count++;
	}
	*(dct + count) = '\0';
	return (count - 1);
}
