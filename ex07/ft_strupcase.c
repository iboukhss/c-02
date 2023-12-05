/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:11:20 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 18:11:25 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	hello[] = "tEstT String";
	char	*hi;

	printf("nocase: %s\n", hello);
	hi = ft_strupcase(hello);
	printf("upcase: %s\n", hi);
}
*/
