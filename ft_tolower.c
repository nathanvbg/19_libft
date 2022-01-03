/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <nverbrug@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:06:53 by nverbrug          #+#    #+#             */
/*   Updated: 2021/12/07 16:07:43 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char x;

	x = (unsigned char) c;
	if (x >= 'A' && x <= 'Z')
		x += 32;
	return (x);
}
