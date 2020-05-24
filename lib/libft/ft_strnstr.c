/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 11:31:22 by mdelphia          #+#    #+#             */
/*   Updated: 2019/04/23 11:31:32 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		len_little;
	const char	*ret_str;

	len_little = ft_strlen(little);
	ret_str = big;
	if (!len_little)
		return ((char *)ret_str);
	while (*big && (len-- >= len_little))
	{
		if (!(ft_memcmp(big, little, len_little)))
		{
			ret_str = big;
			return ((char *)ret_str);
		}
		big++;
	}
	return (NULL);
}
