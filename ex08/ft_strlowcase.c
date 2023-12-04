/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:42:29 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/04 16:42:33 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		++str;
	}
	return (tmp);
}

/*
#include <stdio.h>

int	main(void)
{
	char	hello[] = "THIS IS A STRING!";
	char	*hi;

	printf("upcase: %s\n", hello);
	hi = ft_strlowcase(hello);
	printf("nocase: %s\n", hi);
}
*/
