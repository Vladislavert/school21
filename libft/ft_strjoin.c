/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:16:56 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 17:24:39 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lengthS1;
	int		lengthS2;
	int		count;

	if (!s1 || !s2)
		return (NULL);
	lengthS1 = ft_strlen(s1);
	lengthS2 = ft_strlen(s2);
	str = (char *)malloc(lengthS1 + lengthS2 + 1);
	if (!str)
		return (NULL);
	count = 0;
	while (count != lengthS1 + lengthS2)
	{
		if (count < lengthS1)
			*(str + count) = s1[count];
		else
			*(str + count) = s2[count - lengthS1];
		count++;
	}
	*(str + count) = '\0';
	return (str);
}
