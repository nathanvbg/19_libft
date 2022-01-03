/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:14:23 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 17:41:58 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	x;
	size_t		i;
	char		*str;

	x = (unsigned char) c;
	str = (char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "arqnq";
	char s2[] = "arqnq";

	printf("%s\n", ft_memchr(s1, 'q', 0));
	printf("%s\n\n", memchr(s2, 'q', 0));
	printf("%s\n", ft_memchr(s1, 'q', 1));
	printf("%s\n\n", memchr(s2, 'q', 1));
	printf("%s\n", ft_memchr(s1, 'q', 2));
	printf("%s\n\n", memchr(s2, 'q', 2));
	printf("%s\n", ft_memchr(s1, 'q', 3));
	printf("%s\n\n", memchr(s2, 'q', 3));
	printf("%s\n", ft_memchr(s1, 'q', 4));
	printf("%s\n\n", memchr(s2, 'q', 4));
	printf("%s\n", ft_memchr(s1, 'q', 5));
	printf("%s\n\n", memchr(s2, 'q', 5));
	printf("%s\n", ft_memchr(s1, 'q', 6));
	printf("%s\n\n", memchr(s2, 'q', 6));
}
