/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:44:02 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/14 12:09:55 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (result == NULL)
		return (0x00);
	while (s[i] != 0x00)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0x00;
	return (result);
}
