/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:43:26 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 18:54:14 by iboukhss         ###   ########.fr       */
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
	unsigned int	tmp;
	unsigned int	i;

	tmp = ft_strlen(src);
	i = 0;
	while (i < size - 1)
	{
		dest[i] = *src;
		++src;
		++i;
	}
	dest[i] = '\0';
	return (tmp);
}

/* Compile with -lbsd */
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	*str = "helloworld";
	char	here[8] = "";
	char	here2[8] = "";

	unsigned int	ret;
	unsigned int	ret2;

	unsigned int	size = 8;

	printf("string:     %s\n", str);

	ret = strlcpy(here, str, size);
	printf("strlcpy:    %s+%c\n", here, *(here+size));
	printf("return:     %u\n", ret);

	ret2 = ft_strlcpy(here2, str, size);
	printf("ft_strlcpy: %s+%c\n", here2, *(here2+size));
	printf("ftstrl:     %u\n", ret2);
}
*/
