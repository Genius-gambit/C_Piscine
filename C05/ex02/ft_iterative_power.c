/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:36:46 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/01 10:07:26 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

int main(void)
{
    printf("%d\n", ft_iterative_power(19, 6));
    printf("%d\n", ft_iterative_power(25, 5));
    printf("%d\n", ft_iterative_power(0, 3));
    printf("%d\n", ft_iterative_power(2, 0));
    printf("%d\n", ft_iterative_power(-19, 5));
    printf("%d\n", ft_iterative_power(19, -6));
    return (0);
}
