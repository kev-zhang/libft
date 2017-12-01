/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:54:45 by pzhang            #+#    #+#             */
/*   Updated: 2017/11/27 11:54:52 by pzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int count[2];

	count[0] = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[count[0]] != '\0')
	{
		count[1] = 0;
		if (str[count[0]] == to_find[0])
		{
			while (to_find[count[1]] != '\0')
			{
				if (to_find[count[1]] == str[count[0] + count[1]])
					count[1]++;
				else
					break ;
			}
		}
		if (to_find[count[1]] == '\0')
			break ;
		count[0]++;
	}
	if (str[count[0]] == '\0' || to_find[0] == '\0')
		return (0);
	return ((char*)&str[count[0]]);
}
