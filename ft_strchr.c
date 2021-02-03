/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojomoon <jojomoon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:28:52 by mberthai          #+#    #+#             */
/*   Updated: 2021/02/02 22:13:43 by jojomoon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
