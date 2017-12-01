/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:31:58 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/27 12:19:26 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int c;
	int n;
	int s;

	c = 0;
	n = 0;
	s = 1;
	while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = 10 * n + (str[c] - '0');
		c++;
	}
	return (s * n);
}
