/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:13:22 by akravets          #+#    #+#             */
/*   Updated: 2016/12/08 14:13:23 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	char *s1_copy;

	s1_copy = s1;
	while (*s1_copy != '\0')
		s1_copy++;
	while (len > 0 && *s2 != '\0')
	{
		*s1_copy++ = *s2++;
		len--;
	}
	*s1_copy = '\0';
	return (s1);
}
