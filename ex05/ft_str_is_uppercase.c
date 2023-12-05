/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:10 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 19:03:35 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	upcase;

	upcase = 1;
	while (*str && upcase == 1)
	{
		if (*str >= 'A' && *str <= 'Z')
			upcase = 1;
		else
			upcase = 0;
		++str;
	}
	return (upcase);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*bla = "AAAaA";
	int	alp = 10;

	alp = ft_str_is_uppercase(bla);

	printf("string: %s\nalpha?: %d\n", bla, alp);
}
*/
