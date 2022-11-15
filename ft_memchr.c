/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:03:05 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/12 13:25:49 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	check;

	i = 0;
	str = (unsigned char *)s;
	check = (unsigned char)c;
	while (i < n - 1)
	{
		if (str[i] != check)
			i++;
		if (str[i] == check)
			return (str + i);
	}
	return (0);
}
