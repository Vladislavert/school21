/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:13:48 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 17:08:00 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t count;
	unsigned char *s1;

	s1 = (unsigned char *)s;
	count = 0;
	while(count < n)
	{
		if (s1[count] == (unsigned char)c)
			return (&s1[count]);
		count++;
	}
	return (NULL);
}
