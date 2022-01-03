/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:11:58 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/09 16:40:01 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	len_final;

	i = 0;
	len = ft_strlen(dst);
	len_final = ft_strlen(dst) + ft_strlen(src);
	if( n == 0)
		return (ft_strlen(src));
	while (src[i] && (len + i) < (n - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	if (n < ft_strlen(dst))
		return (ft_strlen(src) + n);
	return(len_final);
}

/*
int	main()
{
	char dest[100] = "sa";
	char src[100] = "frit";
	char dest1[100] = "sa";
	char src1[100] = "frit";
	printf("f= %zu\n", ft_strlcat(dest, src, 2));
	printf("o= %zu\n", strlcat(dest1, src1, 2));
	printf("f= %s\n", dest);
	printf("o= %s\n", dest1);
}
*/
