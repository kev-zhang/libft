/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:52:33 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 15:38:57 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	temp = (t_list*)malloc(sizeof(t_list));
	if (temp)
	{
		temp->content = (void*)malloc(content_size);
		if (!(temp->content))
			return (NULL);
		if (!content)
		{
			temp->content_size = 0;
			temp->content = NULL;
		}
		else
		{
			temp->content_size = content_size;
			ft_memmove(temp->content, content, content_size);
		}
		temp->next = NULL;
		return (temp);
	}
	return (NULL);
}
