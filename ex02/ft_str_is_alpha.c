/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:44:00 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 18:02:18 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alpha = 1;

	while (*str && alpha == 1)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			alpha = 1;
		else
			alpha = 0;
		++str;
	}
	return (alpha);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*bla = "";
	int	alp = 10;

	alp = ft_str_is_alpha(bla);

	printf("string: %s\nalpha?: %d\n", bla, alp);
}
*/
