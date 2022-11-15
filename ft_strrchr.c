/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:27:21 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/14 11:44:46 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last;
	int		find;
	char	*str;

	i = 0;
	last = 0;
	find = 0;
	str = (char *)s;
	if (c == 0x00)
		return (str + ft_strlen(str));
	while (s[i] != 0x00)
	{
		if (s[i] != c)
			i++;
		if (s[i] == c)
		{
			last = i++;
			find = 1;
		}
	}
	if (i == ft_strlen(str) && find == 0)
		return (0x00);
	else
		return (str + last);
}
