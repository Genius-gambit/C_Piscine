/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 19:53:10 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/22 14:05:20 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int b;
	int g;

	b = 0;
	while (b < 100)
	{
		g = b + 1;
		while (g < 100)
		{
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			write(1, " ", 1);
			ft_putchar(g / 10 + '0');
			ft_putchar(g % 10 + '0');
			if (b != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			g++;
		}
		b++;
	}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
