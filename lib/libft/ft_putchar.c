/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:05:31 by mdelphia          #+#    #+#             */
/*   Updated: 2019/11/26 23:46:48 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar(int c)
{
	unsigned char	sym;

	sym = (unsigned char)c;
	write(STDOUT_FILENO, &sym, sizeof(unsigned char));
	return (c);
}
