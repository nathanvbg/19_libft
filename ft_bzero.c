/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:06:52 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 15:19:56 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[50] = "hello my friend";
	char s2[50] = "hello my friend";

	ft_bzero(s1, 5);
	bzero(s2, 5);
}
