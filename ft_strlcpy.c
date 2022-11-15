/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:14:05 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/09 13:32:25 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 1)
	{
		while (src[i] != 0x00 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0x00;
	}
	return (ft_strlen(src));
}
