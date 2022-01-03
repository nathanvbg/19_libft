/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:34:54 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 15:22:51 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	l;
	size_t			i;
	char			*str;

	if (src == NULL)
		return (NULL);
	i = 0;
	str = (char *)src;
	l = (unsigned char) c;
	while (i < len)
	{
		str[i] = l;
		i++;
	}
	return (src);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char str1[50] = "helloww copain";
	char str2[50] = "helloww copain";
	printf("%s\n", ft_memset(str1, 'a', 5));
	printf("%s\n", memset(str2, 'a', 5));
}
