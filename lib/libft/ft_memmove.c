/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:59:19 by mdelphia          #+#    #+#             */
/*   Updated: 2019/04/21 15:53:07 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *buf;

	if (dest == src)
		return (dest);
	buf = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (buf)
	{
		ft_memset(buf, 0, n);
		ft_memcpy(buf, src, n);
		ft_memcpy(dest, buf, n);
	}
	return (dest);
}
