/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:37:16 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/27 14:55:06 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int n;

	n = (int)ft_strlen(str);
	while (n >= 0)
	{
		if (str[n] == c)
			return ((char*)(str + n));
		n--;
	}
	return (NULL);
}
