/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:25:06 by mberthai          #+#    #+#             */
/*   Updated: 2021/01/27 12:35:12 by mberthai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tsize;

	tsize = nmemb * size;
	ptr = malloc(tsize);
	if (tsize != 0)
	{
		ft_bzero(ptr, tsize);
		return (ptr);
	}
	return (NULL);
}
