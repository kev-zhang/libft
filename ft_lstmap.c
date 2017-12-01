/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:07:33 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 22:44:14 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp1;
	t_list	*temp2;
	t_list	*temp3;
	int		c;

	if (!lst || !f)
		return (NULL);
	c = 0;
	temp1 = lst;
	while (temp1)
	{
		c++;
		temp1 = temp1->next;
	}
	if (!(temp2 = (t_list*)malloc(sizeof(t_list) * c)))
		return (NULL);
	temp3 = f(lst);
	temp2 = temp3;
	while (lst->next)
	{
		temp2->next = f(lst->next);
		temp2 = temp2->next;
		lst = lst->next;
	}
	return (temp3);
}
