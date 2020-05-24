/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nsym.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:25:52 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/24 14:36:37 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_nsym(int fd, char sym, size_t n)
{
	char	buf[n];

	if (n)
	{
		ft_memset(buf, sym, n);
		write(fd, buf, n);
	}
}
