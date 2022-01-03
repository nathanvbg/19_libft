/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:08:16 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/03 17:00:44 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int	ft_count_line(char *str, char c)
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
	//printf("%d\n", line);
	return (line);
}

char	*ft_strsdup(char *str, char c)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	i = 0;
	while (str[len] && str[len] != c)
		len++;
	dest = malloc (len + 1 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)s;
	if (str == NULL)
		return (NULL);
	tab = malloc(ft_count_line(str, c) + 2 * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			tab[j++] = ft_strsdup(&str[i], c);
		while (str[i] != c && str[i])
			i++;
	}
	tab[j] = (NULL);
	return (tab);
}
/*
int	main()
{
	char *str;
	char **tab;

	str = "      split       this for   me  !       ";
	tab = ft_split(str, ' ');
	print_tab(tab);
	return (0);
}
*/
