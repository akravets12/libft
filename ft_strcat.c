/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:11:35 by akravets          #+#    #+#             */
/*   Updated: 2016/12/08 14:11:37 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *copy_of_s1;

	copy_of_s1 = s1;
	while (*copy_of_s1 != '\0')
		copy_of_s1++;
	while (*s2 != '\0')
		*copy_of_s1++ = *s2++;
	*copy_of_s1 = '\0';
	return (s1);
}
