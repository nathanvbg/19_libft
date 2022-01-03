/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:08:26 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 16:19:10 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*str;

	x = (char) c;
	str = (char *)s;
	i = 0;
	while (str[i])
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
	char s1[] = "arnquu";
	char s2[] = "arnquu";

	printf("%s\n", ft_strchr(s1, 'q'));
	printf("%s\n", strchr(s2, 'q'));
}
