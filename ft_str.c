/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:41:01 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:41:03 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str(char const *s, size_t i, size_t k)
{
	size_t	n;
	char	*str;

	n = 0;
	if (!(str = (char*)malloc((k - i) + 2)))
		return (NULL);
	while (i <= k)
	{
		str[n] = s[i];
		i++;
		n++;
	}
	str[n] = '\0';
	return (str);
}
