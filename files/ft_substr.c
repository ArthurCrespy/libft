/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:43:08 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/21 17:22:31 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + length] && length < len)
		length++;
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[start + i] && i < length)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
