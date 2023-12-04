char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (tmp);
}

/*
#include <stdio.h>

int	main(void)
{
	char	hello[] = "this is a string";
	char	*hi;
	printf("nocase: %s\n", hello);
	hi = ft_strupcase(hello);
	printf("upcase: %s\n", hi);
}
*/
