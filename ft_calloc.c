/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:55:54 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/02 09:38:24 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*s;

	s = malloc(nelem * elsize);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (nelem * elsize));
	return (s);
}
