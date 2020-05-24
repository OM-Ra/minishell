/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmoveptr_end.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:18:58 by mdelphia          #+#    #+#             */
/*   Updated: 2019/09/23 18:23:38 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmoveptr_end(const char *str, char sym)
{
	if (str && *str && *(str + 1))
	{
		while (str && *str && (*str != sym))
			++str;
		--str;
	}
	return ((char *)str);
}
