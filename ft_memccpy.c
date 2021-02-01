/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:27:24 by mberthai          #+#    #+#             */
/*   Updated: 2021/01/27 13:16:54 by mberthai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	ch = c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == ch)
		{
			dest = (void *)d;
			return (&dest[i + 1]);
		}
		i++;
	}
	return (NULL);
}
