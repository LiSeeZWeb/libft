/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:04:47 by victor-g          #+#    #+#             */
/*   Updated: 2023/09/25 20:46:07 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* concatena la cadena "src" en la cadena "dest" hasta que ESTE llegue
a su	maximo(size) terminando en nulo */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && dstlen + i + 1 < size)
	{
		dst[dstlen + i] = src[i];
		++i;
	}
	if (size >= dstlen)
	{
		dst[dstlen + i] = '\0';
		return (dstlen + srclen);
	}
	return (size + srclen);
}
