/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:33:33 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/10 15:12:12 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_separators(char const *s, char c)
{
	size_t	count;
	size_t	count_flag;
	size_t	size_array;

	count = 0;
	size_array = 0;
	count_flag = count;
	while (s[count])
	{
		if (s[count] != c)
		{
			if (!(count_flag == count - 1))
				size_array++;
			count_flag = count;
		}
		count++;
	}
	return (size_array);
}

static void	get_strings(char **strings, const char *s, char c, size_t size)
{
	size_t	size_str;
	char	*ptr_sep;
	
	while(size--)
	{
		while(*(s) == c)
			s++;
		ptr_sep = ft_strchr(s, c);
		if (ptr_sep == NULL)
			ptr_sep = ft_strchr(s, '\0');
		size_str = (size_t)(ptr_sep - s);
		*strings = ft_calloc(size_str + 1, sizeof(char));
		if (*strings == NULL)
			return ;
		ft_strlcpy(*strings, s, size_str + 1);
		s = ptr_sep;
		strings++;
	}
	*strings = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	size_array;
	char	**str;
	
	if (!s)
		return (NULL);
	count = 0;
	size_array = 0;
	size_array = number_separators(s, c);
	str = (char **)ft_calloc(size_array + 1, sizeof(char *));
	if (!str)
		return (NULL);
	get_strings(str, s, c, size_array);
	return (str);
}
