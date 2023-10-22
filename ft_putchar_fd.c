/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:34:54 by victor-g          #+#    #+#             */
/*   Updated: 2023/10/02 17:35:47 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* imprime un caracter "c"... (fd es la salida) */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
