/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:29:21 by iboukhss          #+#    #+#             */
/*   Updated: 2023/11/29 19:29:25 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		++src;
		++dest;
		++i;
	}
}

int	main(void)
{
	char	*new = "this is a string";
	char	destination[17];
	int	i = 0;

	printf("origin: %s\n", destination);

	printf("memory: ");
	for (i = 0; i < 17; ++i)
	{
		printf("%c", *(destination+i));
	}
	printf("\n");

	ft_strncpy(destination, new, 6);

	printf("result: %s", destination);
}
