/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:14:52 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/15 07:53:56 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_src;
	unsigned int	i_dest;
	unsigned int	length_src;
	unsigned int	length_dest;

	i_src = 0;
	i_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	while (src[i_src] != 0x00 && i_dest + 1 < size)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = 0x00;
	if (size > length_dest)
		return (length_dest + length_src);
	return (length_src + size);
}
