/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:19:57 by nverbrug          #+#    #+#             */
/*   Updated: 2022/01/03 15:33:13 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*str;

	if (s[0] == '\0')
		return (NULL);
	x = (char) c;
	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&str[i]);
		i--;
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
