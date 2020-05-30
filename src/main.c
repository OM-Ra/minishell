/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:55:32 by mdelphia          #+#    #+#             */
/*   Updated: 2020/05/22 19:16:18 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh.h"

static void	sh21_finish(char **sh_environ)
{
	ft_strdel_split(sh_environ);
}

static char	*test_sh(void)
{
	char			buf[BUFSIZ];
	int				i;

	ft_putstr("$> ");
	if ((i = read(STDIN_FILENO, buf, BUFSIZ)) > 1)
	{
		buf[i - 1] = '\0';
		return (ft_strcpy(ft_strnew(i - 1), buf));
	}
	return (NULL);
}

int			main(int argc, char **argv, char **env)
{
	t_init			init;

	(void)(argc);
	(void)(argv);
	(void)(env);
	sh21_init(&init, env, &init.execlist);
	while (1)
	{
		// input_begin(&init.execlist, &init.inp);
		init.inp.str_for_parse = test_sh();
		if ((!init.inp.str_for_parse && init.inp.key == ('d' & 0x1f)))
			break ;
		else if (init.inp.str_for_parse &&
			!parser(&init.execlist, &(init.inp.str_for_parse), &init.prs))
			check_choice(&init.execlist, init.prs.beg);
		free_befor_exec(&init.prs);
		if (init.inp.str_for_parse)
			free(init.inp.str_for_parse);
	}
	input_finish(&init.inp);
	sh21_finish(init.execlist.sh_environ);
	return (0);
}
