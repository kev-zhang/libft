/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:01:18 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 20:01:35 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	n;

	n = 0;
	while (n <= ft_strlen(str))
	{
		if (str[n] == c)
			return ((char*)(str + n));
		n++;
	}
	return (NULL);
}
