/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:23:15 by mdelphia          #+#    #+#             */
/*   Updated: 2019/08/12 12:20:11 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t t_byte_shift;

	t_byte_shift = 0;
	while (t_byte_shift < n)
	{
		*((unsigned char *)s + t_byte_shift) = 0;
		t_byte_shift++;
	}
}
