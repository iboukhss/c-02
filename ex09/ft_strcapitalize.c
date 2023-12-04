/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:40:52 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/04 16:40:55 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	return ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'));
}

int	ft_str_is_numeric(char *str)
{
	return ((*str >= '0' && *str <= '9'));
}

int	ft_str_is_lowcase(char *str)
{
	return ((*str >= 'a' && *str <= 'z'));
}

int	ft_str_is_upcase(char *str)
{
	return ((*str >= 'A' && *str <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_init;

	i = 0;
	is_init = 1;
	while (*(str + i))
	{
		if (ft_str_is_alpha(str + i) || ft_str_is_numeric(str + i))
		{
			if (ft_str_is_lowcase(str + i) && is_init)
				*(str + i) -= 32;
			else if (ft_str_is_upcase(str + i) && !is_init)
				*(str + i) += 32;
			is_init = 0;
		}
		else
			is_init = 1;
		++i;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	testing[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*res;

	printf("%s\n", testing);
	res = ft_strcapitalize(testing);
	printf("%s\n", res);
}
*/
