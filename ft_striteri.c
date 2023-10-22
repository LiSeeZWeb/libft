/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:50:38 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/21 21:23:33 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* aplica la funcion f en cada caracter de la cadena "s"*/ 
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
		f(i, &s[i]);
}
