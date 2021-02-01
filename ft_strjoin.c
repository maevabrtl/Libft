/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:29:11 by mberthai          #+#    #+#             */
/*   Updated: 2021/01/27 13:25:49 by mberthai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	l;
	size_t	j;
	char	*str;

	i = 0;
	l = (ft_strlen(s1) + ft_strlen(s2));
	if (!(str = malloc(sizeof(char) * l)))
		return (NULL);
	while (i < l)
	{
		if (s1[i] == '\0')
			while (s2)
			{
				str[i] = s2[j];
				i++;
				j++;
			}
		if (s2[j] != '\0')
			str[i] = s1[i];
	}
	return (str);
}
