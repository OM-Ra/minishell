/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skiptabs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:53:35 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/16 20:42:17 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skiptabs(const char *str)
{
	if (str && *str)
	{
		while (str && ft_isspace(*str))
			++str;
	}
	return ((char *)str);
}
