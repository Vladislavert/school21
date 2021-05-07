/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:17:29 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:26:41 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;

	count = 0;
	while (count < n && s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (s1[count] != s2[count])
		return (s1[count] - s2[count]);
	return (0);
}
