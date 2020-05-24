/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:31:10 by mdelphia          #+#    #+#             */
/*   Updated: 2019/10/06 23:33:03 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_print_lines(char *const str[])
{
	size_t size_arr;

	size_arr = 0;
	if (str && *str)
	{
		while (*str)
		{
			ft_printf("%s\n", *str);
			++str;
			++size_arr;
		}
	}
	return (size_arr);
}
