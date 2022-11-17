/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:27:16 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/14 11:44:43 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tablen(char **strs, int size)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		result += ft_strlen(strs[i++]);
	}
	return (result);
}
