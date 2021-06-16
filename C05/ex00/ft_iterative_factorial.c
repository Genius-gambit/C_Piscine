/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 21:07:10 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/01 10:06:21 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		ans = ans * (nb - 1);
		nb--;
	}
	return (ans);
}

int main(void)
{
    printf("%d\n", ft_iterative_factorial(78));
    printf("%d\n", ft_iterative_factorial(10));
    printf("%d\n", ft_iterative_factorial(19));
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(1));
    printf("%d\n", ft_iterative_factorial(-45));
    return (0);
}
