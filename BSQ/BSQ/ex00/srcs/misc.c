/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:20:56 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/08 21:21:00 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		ft_get_length(int fd, char *buf)
{
	int		len;

	len = 0;
	read(fd, buf, 1);
	while (*buf != '\n')
	{
		len++;
		read(fd, buf, 1);
	}
	return (len);
}

void	ft_print_map(char **map)
{
	int		r;
	int		c;

	r = 0;
	while (r < g_num_lines)
	{
		c = 0;
		while (c < g_linelength)
		{
			write(1, &map[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

char	**ft_insert_bsq(char **map, int bsq)
{
	int		r;
	int		c;

	g_full = g_symbols[2];
	r = g_max_row - (bsq - 1);
	while (r <= g_max_row)
	{
		c = g_max_col - (bsq - 1);
		while (c <= g_max_col)
		{
			map[r][c] = g_full;
			c++;
		}
		r++;
	}
	return (map);
}

void	ft_destroy_map(char **map)
{
	int		r;

	r = 0;
	while (r < g_num_lines)
	{
		free(map[r]);
		r++;
	}
	free(map);
}
