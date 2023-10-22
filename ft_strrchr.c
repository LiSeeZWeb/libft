/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:50:54 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/21 20:00:35 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned int	i;

	p = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			p = (char *)s + i;
		++i;
	}
	if ((char)c == 0)
		p = (char *)s + i;
	return (p);
}
