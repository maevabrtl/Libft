/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojomoon <jojomoon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:28:41 by mberthai          #+#    #+#             */
/*   Updated: 2021/02/02 19:50:53 by jojomoon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		tablen(char const *s, char c)
{
	size_t i;
	size_t a;

	i = 0;
	a = 1;
	while (s[i])
	{
		if (s[i] == c && i != 0 && s[i + 1] != '\0')
			a++;
		i++;
	}
	return (a);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	a;
	size_t	i;
	size_t	wl;
	size_t	j;

	i = 0;
	j = 0;
	a = tablen(s, c);
	tab = NULL;
	if (!(*tab = malloc(sizeof(char *) * a)))
		return (NULL);
	while (s[i])
	{
		while (s[i] != c)
		{
			wl++;
			i++;
		}
		if (!(tab[j] = malloc(sizeof(char) * wl)))
			return (NULL);
		wl = 0;
		i++;
		j++;
	}
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			tab[j][i] = s[i];
			i++;
		}
		i++;
		j++;
	}
	return (tab);
}
