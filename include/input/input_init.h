/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_init.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:23:45 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/08 22:58:37 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_INIT_H
# define INPUT_INIT_H

# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include <termios.h>

# include "libft.h"
# include "input_macros.h"
# include "input_termcap.h"
# include "input_greeting.h"

void	entry_not_canon(struct termios *st_copy);
void	entry_canon(struct termios *st_term);
void	input_init(struct s_input *inp);
void	input_finish(struct s_input *inp);

#endif
