#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str;
	unsigned char *src1;

	if (dst == src)
		return (dst);
	str = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			str[len] = src1[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (str);
}