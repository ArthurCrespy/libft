/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:12:19 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/14 11:44:47 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	find;
	int		i_little;

	i = 0;
	find = 0;
	i_little = 0;
	if (!little[i_little])
		return ((char *)big);
	if (ft_strlen(little) > len)
		return (NULL);
	while (big[i] && little[i_little] && i < len)
	{
		if (little[i_little++] == big[i++])
			find++;
		else if (little[i_little] != big[i++])
		{
			i_little = 0;
			find = 0;
		}
	}
	if (find == ft_strlen(little))
		return ((char *)big + (i - find));
	else
		return (0);
}
