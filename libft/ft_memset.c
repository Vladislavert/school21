/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:14:30 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:52:01 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	int count;
	unsigned char *result;

	count = 0;
	result = (unsigned char*)dst;
	while(count < n)
	{
		*(result + count) = c;
		count++;
	}
	return (result);
}
