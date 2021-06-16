/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:44:13 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/23 19:44:16 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 15;
	b = 6;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d\nb = %d\ndiv= %d\nmod = %d", a, b, div, mod);
	return (0);
}