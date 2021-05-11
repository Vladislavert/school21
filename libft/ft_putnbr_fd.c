/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hambrode <hambrode@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:16:10 by hambrode          #+#    #+#             */
/*   Updated: 2021/05/10 16:48:07 by hambrode         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static size_t	size_str(long long int value)
{
	size_t	size;

	size = 0;
	if (value <= 0)
		size++;
	while (value != 0)
	{
		value /= 10;
		size++;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t			size;
	long long int	val;
	char			symbol;

	val = n;
	size = size_str(val);
	if (val < 0)
	{
		val *= -1;
		symbol = '-';
		write(fd, &symbol, 1);
	}
	while (size--)
	{
		if (symbol == '-' && size == 0)
			break ;
		symbol = val % 10 + '0';
		write(fd, &symbol, 1);
		val /= 10;
	}
}

// подсчитать кол-во символов с учётом кол-ва начать деление
