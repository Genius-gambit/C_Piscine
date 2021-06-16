/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:38:39 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/01 14:33:40 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
    printf("%d\n", ft_recursive_power(19, 6));
    printf("%d\n", ft_recursive_power(25, 5));
    printf("%d\n", ft_recursive_power(0, 3));
    printf("%d\n", ft_recursive_power(2, 0));
    printf("%d\n", ft_recursive_power(-19, 5));
    printf("%d\n", ft_recursive_power(19, -6));
    return (0);
}
