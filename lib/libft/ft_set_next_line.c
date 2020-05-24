/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:47:00 by mdelphia          #+#    #+#             */
/*   Updated: 2019/09/30 14:53:36 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_push_next_line(const char *path_name,
	const char *data, size_t len_data)
{
	char	line[len_data + 1];

	ft_bzero(line, len_data + 1);
	ft_strcpy(line, data);
	ft_strcat(line, "\n");
	return (ft_push_end_file(path_name, line));
}

int			ft_set_next_line(const char *path_name, const char *data)
{
	size_t len_data;

	len_data = ft_strlen(data);
	return (ft_push_next_line(path_name, data, len_data));
}
