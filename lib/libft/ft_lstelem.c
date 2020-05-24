/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstelem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 01:27:19 by mdelphia          #+#    #+#             */
/*   Updated: 2019/05/15 01:27:31 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstelem(t_list *begin_list, size_t index, size_t lst_size)
{
	size_t	i;

	if (begin_list)
	{
		if (index < lst_size)
		{
			i = 0;
			while (i++ < index)
				begin_list = begin_list->next;
		}
	}
	return (begin_list);
}
