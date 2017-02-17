/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:45:29 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:45:30 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size1(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static size_t		ft_num1(char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else if (str[i] != '\0')
		{
			while (str[i] != '\0' && str[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

static char			**ft_str2(const char *str1, char **st, char c)
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
			j = ft_size1(str1, c);
			st[n] = (char*)malloc(sizeof(st) * (ft_size1(str1, c)));
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

char				**ft_strsplit(char const *s, char c)
{
	char	**s1;

	if (!s)
		return (NULL);
	if (!(s1 = (char**)malloc(sizeof(s1) * (ft_num1(s, c) + 2))))
		return (NULL);
	return (ft_str2(s, s1, c));
}
