/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:55:51 by victor-g          #+#    #+#             */
/*   Updated: 2023/09/25 17:07:31 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* cambia el valor de los primeros "size" del string "str" por el caracter "c"*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = c;
	return (s);
}
