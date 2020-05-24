/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memisstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:36:55 by mdelphia          #+#    #+#             */
/*   Updated: 2019/07/21 10:08:13 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memisstr(const char *str, const char *chek_format, size_t size)
{
	if (size <= ft_strlen(str) && size > 0)
	{
		while (*str && size--)
		{
			if (ft_ischar(chek_format, *str))
				return (1);
			str++;
		}
	}
	return (0);
}
