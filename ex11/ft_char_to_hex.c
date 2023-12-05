#include <stdio.h>
#include <stdlib.h>

char	*ft_int_2_hex(int nbr)
{
	int q = 1;
	int r = 0;
	char	*digits = "0123456789abcdef";
	char	hex[4] = {'\\', 0, 0, 0};

	q = nbr/16;
	r = nbr%16;

	hex[1] = digits[q];
	hex[2] = digits[r];

	printf("hex: %s\n", hex);
	return (hex);
}

int	main(void)
{
	int	test = 255;

	ft_int_2_hex(test);
	return (0);
}
