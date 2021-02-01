/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:30:35 by mberthai          #+#    #+#             */
/*   Updated: 2021/01/27 13:30:16 by mberthai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	l = 0;
	while (s[start] && l <= len)
	{
		start++;
		l++;
	}
	if (!(str = malloc(sizeof(char) * l)))
		return (NULL);
	while (i != l)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
