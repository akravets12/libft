/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:45:45 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:45:46 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	k = len;
	while (s[i] <= 32 && s[i] != '\0')
		i++;
	while (s[k] <= 32 && k > 0)
		k--;
	if (k > 0)
		return (ft_str(s, i, k));
	return (ft_strnew(1));
}
