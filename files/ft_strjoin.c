/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:37:28 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/11 11:50:24 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i_s1;
	int		i_s2;
	char	*result;

	i_s1 = 0;
	i_s2 = 0;
	if (s1 == 0x00 || s2 == 0x00)
		return (0x00);
	result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (result == NULL)
		return (0x00);
	while (i_s1 < (int)ft_strlen(s1))
	{
		result[i_s1] = s1[i_s1];
		i_s1++;
	}
	while (i_s2 < (int)ft_strlen(s2))
	{
		result[i_s1 + i_s2] = s2[i_s2];
		i_s2++;
	}
	result[i_s1 + i_s2] = 0x00;
	return (result);
}
