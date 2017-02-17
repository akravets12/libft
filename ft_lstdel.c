/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:31:51 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:31:52 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;
	t_list *list;

	if (alst == NULL)
		return ;
	list = *alst;
	while (list != NULL)
	{
		tmp = list->next;
		ft_lstdelone(&list, del);
		list = tmp;
	}
	*alst = NULL;
}
