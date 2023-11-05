/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesille <adesille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:46:12 by isb3              #+#    #+#             */
/*   Updated: 2023/11/05 16:20:03 by adesille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list *new;

	current = lst;
	while (current)
	{
		new->content = f(current->content);
		new->next = current->next;
		if(!new)
			del(new)
		current = current->next;

	}
}
