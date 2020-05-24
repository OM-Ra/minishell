/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 01:28:22 by mdelphia          #+#    #+#             */
/*   Updated: 2020/01/20 22:43:06 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstreplace(t_list **rep, void *content, size_t content_size)
{
	void	*tmp;

	if (rep)
		if (*rep && content)
		{
			tmp = (*rep)->content;
			(*rep)->content = malloc(content_size);
			if (!(*rep))
				return (NULL);
			ft_memcpy((*rep)->content, content, content_size);
			(*rep)->content_size = content_size;
			ft_memdel(&tmp);
			return (*rep);
		}
	return (NULL);
}
