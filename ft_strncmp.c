/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:00 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 17:13:58 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "sal";
	char s11[] = "sal";
	char s2[] = "salut";
	char s22[] = "salut";

	printf("%d\n", ft_strncmp(s1, s2 , 0));
	printf("%d\n", strncmp(s11, s22 , 0));
	printf("%d\n", ft_strncmp(s1, s2 , 1));
	printf("%d\n", strncmp(s11, s22 , 1));
	printf("%d\n", ft_strncmp(s1, s2 , 2));
	printf("%d\n", strncmp(s11, s22 , 2));
	printf("%d\n", ft_strncmp(s1, s2 , 3));
	printf("%d\n", strncmp(s11, s22 , 3));
	printf("%d\n", ft_strncmp(s1, s2 , 4));
	printf("%d\n", strncmp(s11, s22 , 4));
	printf("%d\n", ft_strncmp(s1, s2 , 5));
	printf("%d\n", strncmp(s11, s22 , 5));
	printf("%d\n", ft_strncmp(s1, s2 , 6));
	printf("%d\n", strncmp(s11, s22 , 6));
}
