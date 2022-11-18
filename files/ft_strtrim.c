/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:48:13 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/14 11:44:45 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isincharset(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	trim_length(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s1[i] != 0x00 && ft_isincharset(set, s1[i]))
		i++;
	if (i == (int)ft_strlen(s1))
		return (0);
	len = ft_strlen(s1) - i;
	i = ft_strlen(s1) - 1;
	while (i && ft_isincharset(set, s1[i]))
	{
		i--;
		j++;
	}
	len -= j;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		i_result;
	int		length;
	char	*result;

	if (s1 == 0x00 || set == 0x00)
		return (NULL);
	i = 0;
	i_result = 0;
	length = trim_length(s1, set);
	if (length == 0)
		return (ft_calloc(1, sizeof(char)));
	result = ft_calloc(length + 1, sizeof(char));
	while (ft_isincharset(set, s1[i]))
		i++;
	while (i_result < length)
	{
		result[i_result] = s1[i + i_result];
		i_result++;
	}
	return (result);
}
