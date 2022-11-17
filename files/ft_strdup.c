/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:02:36 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/12 12:36:23 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (result == NULL)
		return (0x00);
	while (i <= (int)ft_strlen(s))
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}
