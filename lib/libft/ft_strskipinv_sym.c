/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strskipinv_sym.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:25:38 by mdelphia          #+#    #+#             */
/*   Updated: 2019/09/24 15:35:14 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strskipinv_sym(const char *str, char sym)
{
	if (str && *str)
	{
		while (*str && (*str < 33 || *str == sym))
			++str;
		return ((char *)str);
	}
	return (NULL);
}
