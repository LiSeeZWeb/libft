/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:22:18 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/02 09:40:14 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*scopy;
	int		i;

	i = 0;
	scopy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (scopy == NULL)
		return (0);
	while (s[i] != '\0')
	{
		scopy[i] = s[i];
		i++;
	}
	scopy[i] = '\0';
	return (scopy);
}
