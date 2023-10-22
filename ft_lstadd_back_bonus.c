/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:28 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/08 11:39:46 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* añade el nodo "new" al final de la lista */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*copy;

	copy = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (copy != NULL && copy->next != NULL)
		copy = copy->next;
	copy->next = new;
}
