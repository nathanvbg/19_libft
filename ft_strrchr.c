/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:19:57 by nverbrug          #+#    #+#             */
/*   Updated: 2022/01/04 16:23:39 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		if (*s == c)
			return (s);
		i--;
		s--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "";
	char s2[] = "";

	printf("%s\n", ft_strrchr(s1, 'w'));
	printf("%s\n", strrchr(s2, 'w'));
}
*/
