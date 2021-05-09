/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:19:17 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/09 19:56:24 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

int	check_symdol(const char s1, char const *set)
{
	size_t count_set;

	count_set = 0;
	while (count_set != ft_strlen(set))
	{
		if (s1 == *(set  + count_set))
			return (0);
		count_set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count_start;
	size_t	count_end;
	size_t	count;
	char	*str;
	
	if (!s1 || !set)
		return (NULL);
	count_start = 0;
	count_end = ft_strlen(s1);
	if (count_end == 0)
		count_end = 1;
	else
		count_end -= 1;
	while(count_start <= count_end)
	{
		if (!check_symdol(s1[count_start], set))
			count_start++;
		else if (!check_symdol(s1[count_end], set))
			count_end--;
		else
			break ;
	}
	str = ft_calloc(count_end - count_start + 2, sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (count_start <= count_end)
	{
		str[count] = s1[count_start++];
		count++;
	}
	return (str);
}
