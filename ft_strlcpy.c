/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:03:45 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/09 16:09:24 by nverbrug         ###   ########.fr       */
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
