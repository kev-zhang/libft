/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:02:17 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/30 21:06:15 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_helper(int n, int c, long long temp2, int a)
{
	char	*str;

	if (n >= 0)
	{
		str = (char*)malloc(sizeof(char) * (c + 1));
		if (!str)
			return (NULL);
		str[c--] = '\0';
		a = 0;
	}
	else
	{
		str = (char*)malloc(sizeof(char) * (c + 2));
		if (!str)
			return (NULL);
		str[c + 1] = '\0';
		str[0] = '-';
		a = 1;
	}
	while (c >= a)
	{
		str[c--] = '0' + (temp2 % 10);
		temp2 /= 10;
	}
	return (str);
}

static char	*itoa_zero(void)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int			c;
	int			a;
	long long	temp;
	long long	temp2;

	temp = n;
	c = 0;
	if (n < 0)
		temp *= -1;
	temp2 = temp;
	while (temp > 0)
	{
		temp /= 10;
		c++;
	}
	if (n >= 0)
		a = 0;
	else
		a = 1;
	if (n != 0)
		return (itoa_helper(n, c, temp2, a));
	else
		return (itoa_zero());
}
