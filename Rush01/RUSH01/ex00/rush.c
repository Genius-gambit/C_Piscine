/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaidar <yhaidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 08:27:04 by yhaidar           #+#    #+#             */
/*   Updated: 2021/05/30 10:21:25 by yhaidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_board[5][5];
extern int g_chk_row[5][5];
extern int g_chk_col[5][5];
extern int g_condition[16];
extern int *g_start_ptr[4];
extern int g_offset[4][2];

int		is_valid_grid(void);
int		fill_mygrid(int r, int c);
void	ft_putchar(char c);

void	print_board(void)
{
	int r;
	int c;

	r = 0;
	while (++r < 5)
	{
		c = 0;
		while (++c < 4)
		{
			ft_putchar('0' + g_board[r][c]);
			ft_putchar(' ');
		}
		ft_putchar('0' + g_board[r][c]);
		ft_putchar('\n');
	}
}

int		fill_mygrid_sub(int r, int c)
{
	int val;

	val = 0;
	while (++val < 5)
	{
		if (g_chk_row[r][val] || g_chk_col[c][val])
			continue ;
		g_chk_row[r][val] = 1;
		g_chk_col[c][val] = 1;
		g_board[r][c] = val;
		if (fill_mygrid(r, c + 1))
			return (1);
		g_chk_row[r][val] = 0;
		g_chk_col[c][val] = 0;
	}
	return (0);
}

int		fill_mygrid(int r, int c)
{
	if (r == 5)
	{
		if (is_valid_grid())
		{
			print_board();
			return (1);
		}
		return (0);
	}
	if (c == 5)
		return (fill_mygrid(r + 1, 1));
	else
		return (fill_mygrid_sub(r, c));
}

void	init(void)
{
	int i;
	int j;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			g_chk_row[i][j] = 0;
			g_chk_col[i][j] = 0;
		}
	}
	g_start_ptr[0] = &g_board[1][1];
	g_start_ptr[1] = &g_board[4][1];
	g_start_ptr[2] = &g_board[1][1];
	g_start_ptr[3] = &g_board[1][4];
	g_offset[0][0] = 5;
	g_offset[0][1] = 1;
	g_offset[1][0] = -5;
	g_offset[1][1] = 1;
	g_offset[2][0] = 1;
	g_offset[2][1] = 5;
	g_offset[3][0] = -1;
	g_offset[3][1] = 5;
}

int		rush(void)
{
	init();
	return (fill_mygrid(1, 1));
}
