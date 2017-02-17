/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 19:13:33 by akravets          #+#    #+#             */
/*   Updated: 2016/12/02 19:13:50 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ldst;

	ldst = (unsigned char *)dst;
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (ldst);
}
