/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:45:06 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/06 20:19:12 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char n)
{
	char	*base16;
	int		q;
	int		r;

	base16 = "0123456789abcdef";
	q = n / 16;
	r = n % 16;
	write(1, "\\", 1);
	write(1, &base16[q], 1);
	write(1, &base16[r], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			ft_puthex(*str);
		else
			ft_putchar(*str);
		++str;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	*test = "Hello, \x80World!";

	ft_putstr_non_printable(test);
	return (0);
}
*/
