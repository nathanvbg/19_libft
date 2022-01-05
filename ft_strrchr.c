/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:36:23 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/05 13:38:30 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		if (*s == c)
			return (s);
		i--;
		s--;
	}
	return (NULL);
}
