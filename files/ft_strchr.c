/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:13:40 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/10 14:05:14 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
	size_t  i;
	char  *str;

	i = 0;
	str = (char *)s;
	if (c == 0x00)
		return (str + ft_strlen(str));
	while (s[i] != c && s[i] != 0x00)
		i++;
	if (i == ft_strlen(s))
		return (0x00);
	else
		return (str + i);
}