/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:29:21 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/06 19:34:54 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest;
	while (i < n && *src)
	{
		*dest = *src;
		++src;
		++dest;
		++i;
	}
	while (i < n)
	{
		*dest = '\0';
		++src;
		++dest;
		++i;
	}
	return (tmp);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "hello world";
	char	here[16];
	char	here2[16];
	char	*ret;
	char	*ret2;

	unsigned int	n = 10;

	printf("string:     %s\n\n", str);

	ret = strncpy(here, str, n);
	printf("strncpy:    %s\nreturn:     %p\n", here, ret);

	for (int x = 0; x < 16; ++x)
		printf("%d. %c\n", x, ret[x]);

	ret2 = ft_strncpy(here2, str, n);
	printf("\nft_strncpy: %s\nreturn:     %p\n", here2, ret2);

	for (int x = 0; x < 16; ++x)
		printf("%d. %c\n", x, ret2[x]);
}
*/
