/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 01:25:17 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 20:10:20 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (s1[c] == '\0' && s2[c] == '\0')
			return (0);
		else if (s1[c] != s2[c])
			return (((unsigned char)s1[c]) - ((unsigned char)s2[c]));
		c++;
	}
	return (0);
}
