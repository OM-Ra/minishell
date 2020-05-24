/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 17:11:43 by mdelphia          #+#    #+#             */
/*   Updated: 2019/09/22 23:33:19 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_setncat(char *str, int sym, size_t size)
{
	register size_t	i;

	i = 0;
	while (*str)
		++str;
	while (i < size)
	{
		str[i] = sym;
		++i;
	}
	return (str);
}
