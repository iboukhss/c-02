/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:50:36 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 12:31:34 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (tmp);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*hello = "hello world";
	char	copy[16];
	char	copy2[16];
	char	*ret;
	char	*ret2;

	printf("%s %p\n", hello, hello);

	printf("memory: ");
	for (int x = 0; x < 16; ++x)
		printf("%c", *(copy + x));
	printf(" %p\n", copy);

	ret = strcpy(copy, hello);

	printf("strcpy:  ");
	for (int x = 0; x < 16; ++x)
		printf("%c", *(copy + x));
	printf(" %p\n", ret);

	printf("memory: ");
	for (int x = 0; x < 16; ++x)
		printf("%c", *(copy2 + x));
	printf(" %p\n", copy2);

	ret2 = ft_strcpy(copy2, hello);

	printf("ftstrcp: ");
	for (int x = 0; x < 16; ++x)
		printf("%c", *(copy2 + x));
	printf(" %p\n", ret2);
}
