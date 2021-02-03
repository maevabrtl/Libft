/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojomoon <jojomoon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:27:02 by mberthai          #+#    #+#             */
/*   Updated: 2021/02/02 20:01:51 by jojomoon         ###   ########lyon.fr   */
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
		if (tmp->content == NULL)
		{
			del(tmp);
			free(tmp);
		}
		else 
			ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
