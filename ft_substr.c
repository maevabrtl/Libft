/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojomoon <jojomoon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:30:35 by mberthai          #+#    #+#             */
/*   Updated: 2021/02/03 12:39:21 by jojomoon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = start;
	l = 0;
	if (!s)
		return (NULL);
	while (s[start] && l < len)
	{
		start++;
		l++;
	}
	if (!(str = malloc(sizeof(char) * l)))
		return (NULL);
	l = 0;
	while (i < start)
	{
		str[l] = s[i];
		i++;
		l++;
	}
	return (str);
}
