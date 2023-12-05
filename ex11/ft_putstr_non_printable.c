/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:45:06 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/05 14:47:42 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char n)
{
	char	*base;
	int		q;
	int		r;

	base = "0123456789abcdef";
	q = n / 16;
	r = n % 16;
	write(1, "\\", 1);
	write(1, &base[q], 1);
	write(1, &base[r], 1);
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

int	main(void)
{
	char	*test = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(test);
	return (0);
}
