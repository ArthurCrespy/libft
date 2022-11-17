/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:26:49 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/11 11:26:57 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length_dest;

	i = 0;
	length_dest = 0;
	while (dest[length_dest] != 0x00)
	{
		length_dest++;
	}
	while (src[i] != 0x00)
	{
		dest[(length_dest + i)] = src[i];
		i++;
	}
	dest[length_dest + i] = 0x00;
	return (dest);
}
