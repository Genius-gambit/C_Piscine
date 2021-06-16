/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 13:18:41 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/23 22:02:44 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	if (d != 0)
	{
		*a = c / d;
		*b = c % d;
	}
}

int main(void)
{
	int div;
	int mod;
	
	div = 15;
	mod = 6;
	ft_ultimate_div_mod(&div, &mod);
	printf("div = %d & mod = %d", div, mod);
	return (0);
}