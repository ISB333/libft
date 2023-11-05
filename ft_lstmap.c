/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:46:12 by isb3              #+#    #+#             */
/*   Updated: 2023/11/05 17:12:09 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// llocate temp = ft
// create new node with lstnew
// if !new = lstclear and del
// put new node at the end with lstaddback

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list *new;

	temp = lst;
	while (lst)
	{
		new->content = f(temp->content);
		if(!new)
			del(new)
		temp = temp->next;
		ft_lstadd_back
	}
}
