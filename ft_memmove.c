/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 21:07:32 by akravets          #+#    #+#             */
/*   Updated: 2016/12/02 21:08:01 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp;

	tmp = dst;
	if (src < dst)
	{
		src += len;
		dst += len;
		while (len--)
			*((char *)--dst) = *((const char *)--src);
	}
	else
		while (len--)
			*(char *)dst++ = *(const char *)src++;
	return (tmp);
}
