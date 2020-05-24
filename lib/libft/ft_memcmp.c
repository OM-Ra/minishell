/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:58:05 by mdelphia          #+#    #+#             */
/*   Updated: 2019/04/23 11:37:07 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *num1;
	const unsigned char *num2;

	num1 = s1;
	num2 = s2;
	while (n--)
	{
		if (*num1 != *num2)
			return (*num1 - *num2);
		num1++;
		num2++;
	}
	return (0);
}
