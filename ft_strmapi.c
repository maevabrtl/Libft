/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthai <mberthai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:29:45 by mberthai          #+#    #+#             */
/*   Updated: 2021/01/27 13:28:32 by mberthai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(ret = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s)
	{
		ret[i] = (*f)(i, s[i]);
		i++;
	}
	return (ret);
}
