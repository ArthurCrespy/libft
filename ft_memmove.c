/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:01:33 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/09 13:33:44 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp;

	temp = ft_calloc(sizeof(char), ft_strlen(src));
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	return (dest);
}
