/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:46:14 by mdelphia          #+#    #+#             */
/*   Updated: 2019/05/15 01:42:12 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_memnlen(const void *s, int n, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	if (s)
	{
		i = 0;
		while (i < size)
		{
			if (((unsigned char *)s)[i] == n)
				return (len);
			++len;
			++i;
		}
	}
	return (len);
}
