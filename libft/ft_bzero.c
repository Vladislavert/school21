/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:11:17 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:11:21 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	unsigned char *s1;

	count = 0;
	s1 = (unsigned char *)s;
	while (count < n)
	{
		s1[count] = 0;
		count++;
	}
}
