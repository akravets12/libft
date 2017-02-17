/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:41:24 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:41:26 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size3(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char			**ft_str1(const char *str1, char **st, char c)
{
	int		i;
	int		n;
	int		j;

	n = 0;
	i = 0;
	while (str1[i])
	{
		if (str1[i] == c && str1[i])
			i++;
		else if (str1[i])
		{
			j = ft_size3(str1, c);
			st[n] = (char*)malloc(sizeof(st) * (ft_size3(str1, c)));
			st[n][j] = '\0';
			j = 0;
			while (str1[i] != '\0' && str1[i] != c)
				st[n][j++] = str1[i++];
			n++;
		}
	}
	st[n] = NULL;
	return (st);
}
