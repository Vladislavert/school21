/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:19:59 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:30:20 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		count;

	str = (char*)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count != len)
	{
		*(str + count) = s[start + count];
		count++;
	}
	*(str + count) = '\0';
	return (str);
}
