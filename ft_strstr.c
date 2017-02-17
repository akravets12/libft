/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:17:09 by akravets          #+#    #+#             */
/*   Updated: 2016/12/08 14:17:11 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char *copy_of_big;
	char *copy_of_little;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		copy_of_big = (char *)big;
		copy_of_little = (char *)little;
		while (*copy_of_little && *copy_of_big == *copy_of_little)
		{
			copy_of_big++;
			copy_of_little++;
		}
		if (*copy_of_little == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}
