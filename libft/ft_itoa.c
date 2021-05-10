#include "libft.h"

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

char	*ft_itoa(int value)
{
	size_t			size;
	long long int	val;
	char			*str;

	val = value;
	size = size_str(val);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (val < 0)
	{
		val *= -1;
		str[0] = '-';
	}
	while (size--)
	{
		if (str[0] == '-' && size == 0)
			break ;
		str[size] = val % 10 + '0';
		val /= 10;
	}
	return (str);
}
