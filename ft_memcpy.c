/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:23:23 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 15:50:24 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	str = (char *)dst;
	src2 = (char *)src;
	i = 0;
	if (src2[0] == '\0')//pas sur
		return ("");
	while (i < n && src2[i])
	{
		str[i] = (char)src2[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest[50] = "hellooo";
	char dest2[50] = "hellooo";
	char src[40] = "";
	char src2[40] = "";
	printf("%s\n", ft_memcpy(dest, src, 3));
	printf("%s\n", memcpy(dest2, src2, 3));
}
