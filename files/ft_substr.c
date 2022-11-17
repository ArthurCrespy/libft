/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:43:08 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/15 06:51:12 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc((len + 1) * sizeof(*s));
	if (str == NULL)
		return (0x00);
	while (s[i] != 0x00)
	{
		if (i >= (int)start && j < (int)len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0x00;
	return (str);
}
