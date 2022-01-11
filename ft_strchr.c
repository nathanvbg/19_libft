/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:10:32 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/11 11:57:33 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	x;

	x = (char) c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == x)
			return (&str[i]);
		i++;
	}
	if (x == '\0')
		return (&str[i]);
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "tripouille";
	printf("%s\n", strchr(s, 't' + 256));
	printf("%s\n", ft_strchr(s, 't' + 256));
}
*/
