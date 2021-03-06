/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:49:55 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/05 20:16:43 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

unsigned long long int	getdec(unsigned long long int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

unsigned long long int	getmult(unsigned long long int nb)
{
	if (nb >= 10000000000000000)
		return (10000000000000000);
	else if (nb >= 1000000000000000)
		return (1000000000000000);
	else if (nb >= 100000000000000)
		return (100000000000000);
	else if (nb >= 10000000000000)
		return (10000000000000);
	else if (nb >= 1000000000000)
		return (1000000000000);
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(unsigned long long int n,
	   	t_list *tab, 
		unsigned long long int *first)
{
	unsigned long long int i;
	unsigned long long int mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int						main(int ac, char **av)
{
	t_list					*tab;
	unsigned long long int	*first;
	unsigned long long int	addr_first;

	if (av[1][0] == '-')
		return (0);
	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = process("dict.txt");
		ft_print(ft_atoi(av[1]), tab, first);
	}
	return (0);
}
