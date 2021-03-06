/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:08:16 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/11 12:53:15 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_line(const char *str, char c)
{
	int	i;
	int	line;

	i = 0;
	line = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			line++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (line);
}

static char	**ft_free(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (tab);
}

static char	*ft_strsdup(char const *str, char c)
{
	size_t			len;
	unsigned int	start;
	char			*dest;

	len = 0;
	start = 0;
	while (str[len] && str[len] != c)
		len++;
	dest = ft_substr(str, start, len);
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	tab = malloc((ft_count_line(str, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			tab[j++] = ft_strsdup(&str[i], c);
			if (tab[j - 1] == NULL)
				return (ft_free(tab, j - 1));
			while (str[i] != c && str[i])
				i++;
		}
	}
	tab[j] = (NULL);
	return (tab);
}
