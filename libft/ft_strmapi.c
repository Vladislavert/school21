/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:17:19 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:27:28 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int count;

	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while(s[count])
	{
		str[count] = f(count, s);
		count++;
	}
	return (str);
}
