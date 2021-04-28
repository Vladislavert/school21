//   temp includes
#include <stdio.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <fcntl.h>


#include <string.h>


/*
	not finish function:
		memset
		bzero
		memcpy
		memccpy
		memmove
		memchr
		memcmp
		strlcat
		strchr
		strrchr
		strnstr
		strncmp
		atoi

		calloc
		strdup

		ft_split
		ft_itoa
		ft_strmapi
*/

/*char	*ft_itoa(int n)
{
	int		divisor;
	char	res;
	int		tmp; // переименовать
	int		size;

	tmp = 0;
	size = 0;
	divisor = 1;
	while(tmp != 0)
	{
		tmp = n / divisor;
		divisor *= 10;
		size++;
	}

	printf("size = %d\n", size);
	tmp = 0;
	if (n <= 9)
	{
		if (n < 0) //  обработать отрицательные значения
		{
			res = res + (n + '0');
		}
		else
			res = n + '0';
		printf("res = %c\n", res);
		return (res);
	}
	divisor = 10;
	while (tmp != 0)
	{
		tmp = n / divisor;
		if (n / divisor == 0)
			 tmp = n % (divisor / 10);
		// 	tmp = n % divisor;
		res = tmp + '0';
		printf("divisior = %c\n", res);
		divisor *= 10;
	}

	return ("12");
}*/

void	*ft_memset(void *dst, int c, size_t n)
{
	int count;
	unsigned char *result;

	count = 0;
	result = (unsigned char*)dst;
	while(count < n)
	{
		*(result + count) = c;
		count++;
	}
	return (result);
}

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

size_t	ft_strlcpy(char *dct, char *src, size_t size) // проверить правильность написания функции
{
	size_t count;

	count = 0;
	while (count < size)
	{
		*(dct + count) = *(src + count);
		count++;
	}
	*(dct + count) = '\0';
	return (count - 1);
}

char *ft_strchr(const char *str, int symbol)
{
 //   использовать функцию  ft_itoa
}


int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if ((c >= 65 && c<= 90) || (c >= 97 && c<= 122))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int ft_isalnum(int c)
{
	if (!ft_isalpha(c) || !ft_isdigit(c))
		return (0);
	else
		return (1);
}

int ft_toupper(int c)
{
	int res;

	if (c >= 97 && c<= 122)
		res = c - 32;
	else
		return (c);

	return (res);
}

int ft_tolower(int c)
{
	if (c >= 65 && c<= 90)
		return (c + 32);
	else
		return (c);
}

// ------------
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int length;

	length = ft_strlen(s);
	write(fd, s, length);
}

void	ft_putenddl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	// использовать функцию ft_itoa
	//write(fd, n, sizeof(n));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		count;

	str = (char*)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	count = 0;
	while (count != len)
	{
		*(str + count) = s[start + count];
		count++;
	}
	*(str + count) = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lengthS1;
	int		lengthS2;
	int		count;

	lengthS1 = ft_strlen(s1);
	lengthS2 = ft_strlen(s2);
	str = (char*)malloc(lengthS1 + lengthS2 + 1);
	count = 0;
	while (count != lengthS1 + lengthS2)
	{
		if (count < lengthS1)
			*(str + count) = s1[count];
		else
			*(str + count) = s2[count - lengthS1];
		count++;
	}
	*(str + count) = '\0';
	return (str);
}

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



void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int	main()
{
	int fd;
	char str;

	// if ((fd = open("../resources/testFile.txt", O_WRONLY)) == -1)
	if ((fd = open("../resource/test", O_WRONLY)) == -1)
	{
		printf("Error! Opening file\n");
		exit(1);
	}
	
	char *dst_ref;

	char *dst;
	dst = "123";
	// dst = "12";
	dst_ref = dst;
	char *dst1;
	char *src = "23";
	size_t size = 5;

	// printf("%c\n", dst[0]);
	// size_t valueStrlcpy = strlcat(dst_ref, src, size);
	// dst1 = malloc(size);
	// size_t value = ft_strlcpy(dst1, src, size);

	// printf("vaue strlcpy = %d\n", valueStrlcpy);
	// printf("value dst = %c\n", dst[0]);

	printf("----------------------------\n");
	// printf("value strlcpy = %d\n", value);
	// printf("value dst1 = %c\n", dst1[0]);

	// printf("str = %s\n", ft_substr("123", 0, 2));
	// printf("str = %s\n", ft_strjoin("1562", "334"));
	// ft_stzrtrim("5797", "79");

	//пример использования функции strchr
 
 //  отладка функции isascii

char c = '5';

 ft_isascii(c);

	if(ft_isdigit(c))
	printf("%c - is ascii\n",c);
	else
	printf("%c - isn't ascii\n",c);

 //  отладка функции   strchr

  char lotr[] = "_-=Властелин к0лец=-_\n";               // строка в которой будем искать символ 0
 
  printf("Ищите кольцо всевластия в LOTR!!!n\n");
  char * ring = strchr(lotr, '0');                     // поиск символа 0 в строке lotr
 
  printf("Моя прелесть находится в %d\n", ring - lotr + 1);     // определяем позицию символа
 
   char str1[50];

   strcpy(str1,"This is string.h library function");
   puts(str1);

//    memset(str1,'$',7);
   ft_memset(str1,'$',7);
   puts(str1);


	close(fd);
	return (0);
}