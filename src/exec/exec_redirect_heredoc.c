/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_redirect_heredoc.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 16:30:50 by mdelphia          #+#    #+#             */
/*   Updated: 2020/04/07 13:17:15 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"

// static size_t		get_pos_pars_args(char **pars_args)
// {
// 	size_t i;

// 	i = 0;
// 	while (pars_args[i])
// 		++i;
// 	return (i);
// }

// static void			add_param_for_heredoc(t_pars_list *list, char *line)
static int			add_param_for_heredoc(t_exec_lst *execlist,
						t_red_stream *buf_list, char *line)
{
	// size_t i;

	// i = get_pos_pars_args(list->pars_args);
	// list->pars_args[i++] = line;
	// list->pars_args[i] = NULL;

	int fd;

	fd = new_or_open_file(execlist->path_heredoc, 1);
	ft_putstr_fd(line, fd);
	buf_list->save_std = dup(STDIN_FILENO);
	buf_list->stream_a = STDIN_FILENO;
	exec_dup_stream(STDIN_FILENO, fd);
	return (fd);
}

// static int			go_heredoc(t_exec_lst *execlist, t_pars_list *list, t_red_stream *buf_list)
static int			go_heredoc(t_exec_lst *execlist, t_red_stream *buf_list)
{
	char *line;

	if ((line = input_heredoc(execlist, buf_list->stream_name)))
		// add_param_for_heredoc(list, line);
		buf_list->fd_file = add_param_for_heredoc(execlist, buf_list, line);
	else
		return (1);
	return (0);
}

static t_red_stream	*check_heredoc(t_red_stream *stream_list)
{
	while (stream_list)
	{
		if (stream_list->flag_file == -2)
			return (stream_list);
		stream_list = stream_list->next;
	}
	return (NULL);
}

void				exec_redirect_heredoc(t_exec_lst *execlist,
						t_pars_list *list)
{
	t_red_stream	*buf_list;
	int				tmp_fd;

	if ((buf_list = check_heredoc(list->stream_list)))
		while (buf_list)
		{
			// if (go_heredoc(execlist, list, buf_list))
			if (go_heredoc(execlist, buf_list))
				break ;
			tmp_fd = buf_list->save_std;
			buf_list = buf_list->next;
			if ((buf_list = check_heredoc(buf_list)))
				close(tmp_fd);
		}
}
