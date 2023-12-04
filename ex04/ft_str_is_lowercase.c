/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:34:17 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/04 16:27:00 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	lowcase = 1;

	while (*str && lowcase == 1)
	{
		if (*str >= 'a' && *str <= 'z')
			lowcase = 1;
		else
			lowcase = 0;
		++str;
	}
	return (lowcase);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*bla = "";
	int	alp = 10;

	alp = ft_str_is_lowercase(bla);

	printf("string: %s\nalpha?: %d\n", bla, alp);
}
*/
