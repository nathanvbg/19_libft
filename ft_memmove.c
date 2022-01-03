/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:19:59 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/03 14:56:49 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	while (i < len)
	{
		dst2[i] = (char)src2[i];
		i++;
	}
	return (dst);
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
	printf("%s\n", ft_memmove(dest, src, 2));
	printf("%s\n", memmove(dest2, src2, 2));
}
*/
