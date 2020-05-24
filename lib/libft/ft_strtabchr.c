/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:55 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/16 20:43:26 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtabchr(const char *str, const char sym)
{
	char	*p_str;

	p_str = NULL;
	if (str && *str)
	{
		while (str && *str && !ft_isspace(*str))
		{
			if (*str == sym)
			{
				p_str = (char *)str;
				break ;
			}
			++str;
		}
	}
	return (p_str);
}
