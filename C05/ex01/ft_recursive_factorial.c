/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:37:19 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/31 10:37:21 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}


int main(void)
{
    printf("%d\n", ft_recursive_factorial(78));
    printf("%d\n", ft_recursive_factorial(10));
    printf("%d\n", ft_recursive_factorial(19));
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(1));
    printf("%d\n", ft_recursive_factorial(-45));
    return (0);
}
