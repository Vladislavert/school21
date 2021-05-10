/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:13:51 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/10 15:13:54 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	long long int result;
	int i;
	int number_of_signs;

	result = 0;
	number_of_signs = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\f' || *str == '\t' || *str == '\v' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			number_of_signs++;
		str++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		result += (*(str + i) - '0');
		if (i < 9 && *(str + i + 1) >= '0' && *(str + i + 1) <= '9')
			result *= 10;
		else if (i > 9)
		{
			if (number_of_signs % 2 != 0)
				return (0);
			else
				return (-1); 
		}
		i++;
	}
	if (number_of_signs % 2 != 0)
		result *= -1;
	return (result);
}
