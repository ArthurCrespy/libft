/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:53:52 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/11 09:55:31 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb * size > SIZE_MAX)
		return ((void *)1);
	if (nmemb <= 0 || size <= 0)
		return (0x00);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (0x00);
	ft_bzero(result, (nmemb * size));
	return (result);
}
