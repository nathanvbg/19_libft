/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:08:16 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/11 12:21:09 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	printf("%d\n", line);
	return (line);
}

static void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	*ft_strsdup(char const *str, char c, char **tab)
{
	size_t			len;
	unsigned int	start;
	char			*dest;

	len = 0;
	start = 0;
	while (str[len] && str[len] != c)
		len++;
	dest = ft_substr(str, start, len);
	if (dest == NULL)
		ft_free(tab);
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
			tab[j++] = ft_strsdup(&str[i], c, tab);
			while (str[i] != c && str[i])
				i++;
		}
	}
	tab[j] = (NULL);
	return (tab);
}
/*
void	ft_print(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int	main()
{
	char *str;
	char c;

	str = "hello";
	c = 'l';
	ft_print(ft_split(str, c));
	return (0);
}
*/
