/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 00:05:29 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/27 11:57:02 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && s1[count] == s2[count])
	{
		count++;
	}
	return (((unsigned char)s1[count]) - ((unsigned char)s2[count]));
}
