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

	if (size != 0 && (nmemb * size) / size != nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, (nmemb * size));
	return (result);
}
