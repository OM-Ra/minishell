/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:44:45 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/16 20:41:04 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	c = (unsigned char)c;
	return (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ');
}
