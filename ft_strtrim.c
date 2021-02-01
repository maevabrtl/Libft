/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:30:26 by mberthai          #+#    #+#             */
/*   Updated: 2021/01/27 13:29:40 by mberthai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(set) - 1;
	j = 0;
	if (!(str = malloc(sizeof(char) * (i * 2))))
		return (NULL);
	while (s1[i] != set[0])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	return (str);
}
