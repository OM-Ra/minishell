/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:42:01 by mdelphia          #+#    #+#             */
/*   Updated: 2019/07/21 10:24:28 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wcslen(const wchar_t *str)
{
	const wchar_t *p_str;

	if (str)
	{
		p_str = str;
		while (*p_str)
			++p_str;
		return (p_str - str);
	}
	else
		return (0);
}
