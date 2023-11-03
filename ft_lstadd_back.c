/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isb3 <isb3@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:51:31 by isb3              #+#    #+#             */
/*   Updated: 2023/11/03 19:03:33 by isb3             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    temp = *lst;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
}
