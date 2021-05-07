/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:19:17 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/07 21:30:58 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		countSet;
	int		countS1;
	int		length;
	int		lengthS1;
	char	*str;
	// цикл для расчёта количества симолов, которые нужно удалить, для выделения памяти
	countSet = 0;
	length = 0;
	lengthS1 = ft_strlen(s1);
	while (countSet != ft_strlen(set))
	{
		countS1 = 0;
		while (countS1 != lengthS1)
		{
			if (*(s1 + countS1) == *(set  + countSet))
				length++;
			countS1++;
		}
		countSet++;
	}
	str = (char*)malloc(lengthS1 - length + 1);
	//  запоминать в массиве значение индексов, которые следует удалить????
	printf("length = %d\n", length);
	return (str);
}
