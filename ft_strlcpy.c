/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:24:35 by naverbru          #+#    #+#             */
/*   Updated: 2022/01/05 13:29:01 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (n == 0)
		return (len);
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
int main()
{
	char dest[100] = "hello mon ami";
	char str[100] = "ceci est";
	char dest1[100] = "hello mon ami";
	char str1[100] = "ceci est";
	printf("f= %zu\n", ft_strlcpy(dest, str, 20));
	printf("o= %lu\n\n", strlcpy(dest1, str1, 20));
	printf("f= %s\n", dest);
	printf("o= %s\n", dest1);
}
*/
