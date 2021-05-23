/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:13:51 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/10 17:43:24 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(char **str)
{
	int	number_of_signs;
	int	check_sig;

	number_of_signs = 0;
	check_sig = 0;
	while (**str == '+' || **str == '-')
	{
		check_sig++;
		if (**str == '-')
			number_of_signs++;
		(*str)++;
	}
	if (check_sig > 1)
		return (-1);
	return (number_of_signs);
}

static void	skip_symbols(char **str)
{
	while (**str == ' ' || **str == '\n' || **str == '\f' || **str == '\t'
		|| **str == '\v' || **str == '\r')
		(*str)++;
}

static long long int	char_to_int(char *str, int number_of_signs)
{
	int				i;
	long long int	result;

	i = 0;
	result = 0;
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
	return (result);
}

int	ft_atoi(char *str)
{
	long long int	result;
	int				number_of_signs;

	skip_symbols(&str);
	number_of_signs = check_sign(&str);
	if (number_of_signs == -1)
		return (0);
	result = char_to_int(str, number_of_signs);
	if (number_of_signs % 2 != 0)
		result *= -1;
	return (result);
}
