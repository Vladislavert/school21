/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:18:32 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:26:07 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!strncmp(haystack, needle, len))
		return (haystack);
	while (i < len)
	{
		if (haystack[i] == needle[j])
			while (needle[j] && haystack[i + j] && (i + j) < len)
			{
				if (needle[j] != haystack[j])
					break ;
				else if (needle[j + 1] == '\0')
					return (haystack[i]);
				j++;
			}
		i++;
		j = 0;
	}
	return (NULL);
}
