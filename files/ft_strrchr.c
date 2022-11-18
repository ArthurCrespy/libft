/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:27:21 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/18 09:41:14 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last;
	int		find;

	i = 0;
	last = 0;
	find = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] != c)
			i++;
		if (s[i] == c)
		{
			last = i;
			find = 1;
			i++;
		}
	}
	if (i == ft_strlen(s) && find == 0)
		return (NULL);
	return ((char *)s + last);
}
