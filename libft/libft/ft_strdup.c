/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:16:47 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 17:20:15 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	size_s1;
	size_t	count;

	size_s1 = ft_strlen(s1) + 1;
	str = ft_calloc(size_s1, sizeof(char));
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count < size_s1)
	{
		str[count] = s1[count];
		count++;
	}
	return (str);
}
