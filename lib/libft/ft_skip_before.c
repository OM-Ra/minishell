/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_before.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:32:45 by mdelphia          #+#    #+#             */
/*   Updated: 2019/09/23 16:39:05 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skip_before(const char *str, char sym)
{
	if (str && *str && sym > 0)
	{
		while (str && *str && (*str != sym))
			++str;
		if (str && *str && (*str == sym))
			++str;
	}
	return ((char *)str);
}
