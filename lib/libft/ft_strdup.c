/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:01:21 by mdelphia          #+#    #+#             */
/*   Updated: 2019/04/23 11:57:50 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p_res;
	size_t	size;

	size = ft_strlen(s);
	if (!(p_res = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(p_res, s);
	return (p_res);
}
