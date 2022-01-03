/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:19:57 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 16:27:33 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*str;

	x = (char) c;
	str = (char *)s;
	i = ft_strlen(str);
	if (c == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "wqarnququq";
	char s2[] = "wqarnququq";

	printf("%s\n", ft_strrchr(s1, 'w'));
	printf("%s\n", strrchr(s2, 'w'));
}
