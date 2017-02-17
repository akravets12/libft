/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akravets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:32:52 by akravets          #+#    #+#             */
/*   Updated: 2016/12/16 18:32:53 by akravets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element;

	element = (t_list *)ft_memalloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		element->content = NULL;
	}
	else
	{
		element->content = ft_memalloc(content_size);
		if (element->content == NULL)
		{
			ft_memdel((void **)&element);
			return (NULL);
		}
		ft_memcpy(element->content, content, content_size);
	}
	element->content_size = content_size;
	element->next = NULL;
	return (element);
}
