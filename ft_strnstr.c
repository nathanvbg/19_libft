/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:50:23 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/09 12:13:35 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*needle;

	i = 0;
	j = 0;
	hay = (char *)str;
	needle = (char *)to_find;
	if (needle[0] == '\0')
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		if (hay[i] == needle[j])
		{
			while ((hay[i + j] == needle[j]) && hay[i] && (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return (&hay[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *str;
	char *needle;
	str = "salut ca va";
	needle = "ut";
	printf("%s\n", ft_strnstr(str, needle, 0));
	printf("%s\n\n", strnstr(str, needle, 0));
	printf("%s\n", ft_strnstr(str, needle, 1));
	printf("%s\n\n", strnstr(str, needle, 1));
	printf("%s\n", ft_strnstr(str, needle, 2));
	printf("%s\n\n", strnstr(str, needle, 2));
	printf("%s\n", ft_strnstr(str, needle, 3));
	printf("%s\n\n", strnstr(str, needle, 3));
	printf("%s\n", ft_strnstr(str, needle, 4));
	printf("%s\n\n", strnstr(str, needle, 4));
	printf("%s\n", ft_strnstr(str, needle, 5));
	printf("%s\n\n", strnstr(str, needle, 5));
}
*/
