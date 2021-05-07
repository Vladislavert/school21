/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:23:56 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:23:57 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *buf;

	buf = NULL;
	while(*s)
	{
		if (*s == (char)c)
			buf = s;
		s++;
	}
	if (*s == (char)c)
		buf = s;
	return (buf);
}
