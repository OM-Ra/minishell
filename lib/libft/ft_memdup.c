/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:05:43 by mdelphia          #+#    #+#             */
/*   Updated: 2019/10/30 17:09:45 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *content, size_t len_content)
{
	void	*new;

	new = (void *)ft_memalloc(sizeof(BYTE) * len_content);
	if (!new)
		return (NULL);
	ft_memcpy(new, content, len_content);
	return (new);
}
