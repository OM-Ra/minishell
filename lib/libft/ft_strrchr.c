/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:04:49 by mdelphia          #+#    #+#             */
/*   Updated: 2019/04/15 14:04:55 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p_str;

	p_str = NULL;
	while (*s)
	{
		if (*s == c)
			p_str = (char *)s;
		s++;
	}
	if (*s == c)
		p_str = (char *)s;
	return (p_str);
}
