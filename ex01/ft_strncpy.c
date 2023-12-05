/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:29:21 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 17:57:31 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest;
	while (i < n)
	{
		*dest = *src;
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
	char	*str = "this is a string";
	char	here[17];
	char	here2[17];
	char	*ret;
	char	*ret2;

	printf("string:     %s\n", str);

	ret = strncpy(here, str, 6);
	printf("strncpy:    %s\nreturn:     %p\n", here, ret);

	ret2 = ft_strncpy(here2, str, 6);
	printf("ft_strncpy: %s\nreturn:     %p\n", here2, ret2);
}
*/
