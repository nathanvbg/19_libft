/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:46:59 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/05 13:39:18 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	def_nb(char *str, char *set)
{
	size_t	start;
	size_t	end;
	size_t	nb;

	start = 0;
	end = ft_strlen(str);
	nb = 0;
	while (is_charset(str[start], set))
		start++;
	while (is_charset(str[end - 1], set))
		end--;
	nb = ft_strlen(str) - (start + (ft_strlen(str) - end));
	if (start == ft_strlen(str))
		return (0);
	return (nb);
}

char	*ft_strtrim(char const *s1, char const *trim)
{
	size_t	i;
	size_t	start;
	char	*dest;
	char	*set;
	char	*str;

	set = (char *)trim;
	str = (char *)s1;
	i = 0;
	start = 0;
	if (s1 == NULL)
		return (NULL);
	while (is_charset(str[start], set))
		start++;
	dest = malloc(sizeof(char) * def_nb(str, set) + 1);
	if (!dest)
		return (NULL);
	while (i < def_nb(str, set))
		dest[i++] = str[start++];
	dest[i] = '\0';
	return (dest);
}
