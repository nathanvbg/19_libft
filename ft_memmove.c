/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:19:59 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/04 16:22:39 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[60] = "123456";
	char dest2[60] = "123456";
	char src[40] = "lolilol";
	char src2[40] = "lolilol";
	printf("%s\n", ft_memmove(dest, src, 4));
	printf("%s\n", memmove(dest2, src2, 4));
}
*/
