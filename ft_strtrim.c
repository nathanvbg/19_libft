/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:46:59 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/05 17:31:01 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*dest;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (start < ft_strlen(s1) && ft_is_charset(s1[start], set))
		start++;
	while (end > start && ft_is_charset(s1[end - 1], set))
		end--;
	dest = malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start < end)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char *str;
	char *set;

	str = "abec";
	set = "abc";
	printf("%s\n", ft_strtrim(str, set));
	return (0);
}
*/
