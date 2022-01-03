/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:23:23 by nverbrug          #+#    #+#             */
/*   Updated: 2022/01/03 14:43:08 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	str = (char *)dst;
	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = (char)src2[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[50] = "aaaa";
	char dest2[50] = "aaaa";
	char src[40] = "lol";
	char src2[40] = "lol";
	printf("%s\n", ft_memcpy(dest, src, 1));
	printf("%s\n", memcpy(dest2, src2, 1));
}
*/
