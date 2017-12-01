/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 22:49:10 by pzhang            #+#    #+#             */
/*   Updated: 2017/12/01 10:41:49 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables(char **tab)
{
	int p;
	int a;

	p = 0;
	while (tab[p] != 0)
	{
		a = 0;
		while (tab[p][a])
		{
			ft_putchar(tab[p][a]);
			a++;
		}
		ft_putchar('\n');
		p++;
	}
}
