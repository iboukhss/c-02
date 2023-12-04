/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_printable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:38:17 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/04 16:29:26 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	printable = 1;

	while (*str && printable == 1)
	{
		if (*str >= 32 && *str <= 126)
			printable = 1;
		else
			printable = 0;
		++str;
	}
	return (printable);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*bla = "kfdsa;l'fkafjkj'vka' jfasdj';";
	int	alp = 10;

	alp = ft_str_is_printable(bla);

	printf("string: %s\nalpha?: %d\n", bla, alp);
}
*/
