/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:26:47 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/01 16:27:11 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* buscar la primera aparicion de la subcadena(needle) en la cadena "haystack"
hasta los primeros (size) de valores */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i + little_len <= len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)(big + i));
		++i;
	}
	return (0);
}
