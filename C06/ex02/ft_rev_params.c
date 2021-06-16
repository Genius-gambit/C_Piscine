/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:57:25 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/01 19:57:27 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	while (++index < argc)
	{
		ft_putstr(argv[argc - index]);
		ft_putstr("\n");
	}
	return (0);
}
