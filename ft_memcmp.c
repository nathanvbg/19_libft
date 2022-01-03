/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:42:40 by nverbrug          #+#    #+#             */
/*   Updated: 2022/01/03 15:02:15 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "sal";
	char s11[] = "sal";
	char s2[] = "salut";
	char s22[] = "salut";

	printf("%d\n", ft_memcmp(s1, s2 , 0));
	printf("%d\n", memcmp(s11, s22 , 0));
	printf("%d\n", ft_memcmp(s1, s2 , 1));
	printf("%d\n", memcmp(s11, s22 , 1));
	printf("%d\n", ft_memcmp(s1, s2 , 2));
	printf("%d\n", memcmp(s11, s22 , 2));
	printf("%d\n", ft_memcmp(s1, s2 , 3));
	printf("%d\n", memcmp(s11, s22 , 3));
	printf("%d\n", ft_memcmp(s1, s2 , 4));
	printf("%d\n", memcmp(s11, s22 , 4));
	printf("%d\n", ft_memcmp(s1, s2 , 5));
	printf("%d\n", memcmp(s11, s22 , 5));
	printf("%d\n", ft_memcmp(s1, s2 , 6));
	printf("%d\n", memcmp(s11, s22 , 6));
}
*/
