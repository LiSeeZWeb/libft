/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:19:05 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/08 13:16:19 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* aplica la funcion "f" a cada elemento(content) de la lista enlazada(lst)   */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
