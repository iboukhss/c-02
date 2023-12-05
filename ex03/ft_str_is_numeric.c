/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:02:47 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 19:02:53 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numeric;

	numeric = 1;
	while (*str && numeric == 1)
	{
		if (*str >= '0' && *str <= '9')
			numeric = 1;
		else
			numeric = 0;
		++str;
	}
	return (numeric);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*bla = "";
	int	alp = 10;

	alp = ft_str_is_numeric(bla);

	printf("string: %s\nnumer?: %d\n", bla, alp);
}
*/
