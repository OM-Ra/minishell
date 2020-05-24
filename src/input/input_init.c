/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 20:41:03 by mdelphia          #+#    #+#             */
/*   Updated: 2020/04/07 14:07:57 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_init.h"

void	input_finish(struct s_input *inp)
{
	gap_clean_buf(&inp->gap);
	ft_strdel(&inp->gap.buf);
	ft_strdel(&inp->buf);
	ft_strdel(&inp->str_for_parse);
	inp->key = 0;
}

void	input_init(struct s_input *inp)
{
	if (inp)
	{
		gap_init(&inp->gap, INP_SIZE_BUF, INP_SIZE_GAP);
		inp->buf = NULL;
		inp->str_for_parse = NULL;
	}
}
