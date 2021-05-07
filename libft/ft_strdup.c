/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:16:47 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:27:44 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;
	size_t count;

	str = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (str[count])
	{
		str[count] = s1[count];
		count++;
	}
	return (str);
}
