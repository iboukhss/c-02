/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:50:36 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/04 15:56:12 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp = dest;

	while (*src)
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (tmp);
}

/* #include <stdio.h> */
/* #include <string.h> */

/* int	main(void) */
/* { */
/* 	char	*hello = "hello world"; */
/* 	char	copyhere[16]; */
/* 	char	*retptr; */
/* 	int	x, y = 0; */

/* 	printf("%s %p\n", hello, hello); */

/* 	for (x = 0; x < 16; ++x) */
/* 		printf("%c", *(copyhere + x)); */
/* 	printf(" %p\n", copyhere); */

/* 	retptr = ft_strcpy(copyhere, hello); */

/* 	for (y = 0; y < 16; ++y) */
/* 		printf("%c", *(retptr+y)); */
/* 	printf(" %p\n", retptr); */
/* } */
