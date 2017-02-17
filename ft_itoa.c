/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:30:43 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:30:54 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		len;
	char	*c;
	int		i;

	len = ft_size(n);
	if (n <= 0)
		c = (char*)malloc(sizeof(char) * (len + 2));
	else
		c = (char*)malloc(sizeof(char) * (len + 1));
	if (!c)
		return (0);
	i = 0;
	if (n < 0 && ++i)
		c[0] = '-';
	if (n == 0 && ++i)
		c[0] = 48;
	while (--len >= 0)
	{
		if (n < 0)
			c[i++] = 48 - (n / ft_m(10, len)) % 10;
		else
			c[i++] = 48 + (n / ft_m(10, len)) % 10;
	}
	c[i] = 0;
	return (c);
}
