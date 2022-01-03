/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:50:43 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 16:06:28 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char x;

	x = (unsigned char) c;
	if (x >= 'a' && x <= 'z')
		x -= 32;
	return (x);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", toupper('z'));
}
