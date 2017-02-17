/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 21:14:49 by akravets          #+#    #+#             */
/*   Updated: 2016/12/17 18:52:09 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ar, int c, size_t num)
{
	size_t	i;

	i = -1;
	while (++i < num)
		if (((char *)ar)[i] == (char)c)
			return (void *)((size_t)(ar + i));
	return (0);
}
