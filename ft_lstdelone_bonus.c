/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:38:38 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/08 12:56:28 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*elimina un unico nodo de una lista y libera la memoria asociada a dicho nodo*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
