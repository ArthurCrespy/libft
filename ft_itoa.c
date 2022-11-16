/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:16:51 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/14 11:40:58 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	i = ft_len(n) - 1 ;
	result = ft_calloc(ft_len(n) + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	result[ft_len(n) + 1] = 0x00;
/*	if (n == -2147483648)
	{
	}
	if (n == 0)
		result[0] = 48;*/
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n >= 0)
	{
		result[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (result);
}
