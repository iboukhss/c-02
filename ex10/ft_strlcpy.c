/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:43:26 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/04 17:04:39 by iboukhss         ###   ########.fr       */
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
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(src);
	i = 0;
	while (i < size - 1)
	{
		dest[i] = *src;
		++src;
		++i;
	}
	dest[i] = '\0';

	return (len);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	*mystring = "hello";
	char	destination[10] = "hallo";
	unsigned int	give;

	char	*mystring2 = "hello";
	char	destination2[10] = "hallo";
	unsigned int	give2;

	printf("string: %s\n", mystring);
	printf("string? %s\n\n", destination);

	give = strlcpy(destination, mystring, 5);

	printf("string! %s\n", destination);
	printf("strlcp: %u\n\n", give);

	give2 = ft_strlcpy(destination2, mystring2, 5);

	printf("ftstrl: %s\n", destination2);
	printf("ftstrl: %u\n", give2);
}
