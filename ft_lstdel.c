/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:44:06 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 21:27:33 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;

	if (del && *alst)
	{
		while (*alst)
		{
			temp = *alst;
			*alst = (*alst)->next;
			del(temp->content, temp->content_size);
			free(temp);
		}
		*alst = NULL;
	}
}
