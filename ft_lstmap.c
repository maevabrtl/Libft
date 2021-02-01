/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:27:02 by mberthai          #+#    #+#             */
/*   Updated: 2021/02/01 14:21:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *tmp;

	while (lst)
	{
		if (!(tmp = (malloc(sizeof(lst)))))
			return (NULL);
		tmp->content = f(lst->content);
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
