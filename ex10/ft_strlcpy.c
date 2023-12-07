/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:43:26 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/07 14:07:42 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		++str;
		++len;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{

	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = src;
	while (i < size - 1 && *src)
	{
		*dest = *src;
		++src;
		++dest;
		++i;
	}
	*dest = '\0';
	return (ft_strlen(tmp));
}

/* Compile with -lbsd */
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	*str = "hello world";
	char	here[10];
	char	here2[10];

	unsigned int	ret;
	unsigned int	ret2;
	unsigned int	size = 6;

	ret = strlcpy(here, str, size);
	printf("strlcpy:    %s\n", here);
	printf("return:     %u\n", ret);
	for (int x = 0; x < 15; ++x)
		printf("%2d. %c\n", x, here[x]);

	ret2 = ft_strlcpy(here2, str, size);
	printf("\nft_strlcpy: %s\n", here2);
	printf("ftstrl:     %u\n", ret2);
	for (int x = 0; x < 15; ++x)
		printf("%2d. %c\n", x, here[x]);
}
*/
