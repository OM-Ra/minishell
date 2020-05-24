/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:13:11 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/16 20:43:38 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtablen(const char *str)
{
	size_t	len;

	len = 0;
	if (str && *str)
	{
		while (str && *str && !ft_isspace(*str))
		{
			++str;
			++len;
		}
	}
	return (len);
}
