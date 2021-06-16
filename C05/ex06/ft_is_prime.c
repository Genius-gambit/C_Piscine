/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:43:23 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/31 10:43:26 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}

int main(void)
{
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(4));
    printf("%d\n", ft_is_prime(49));
    printf("%d\n", ft_is_prime(31));
    printf("%d\n", ft_is_prime(-2147483648));
    printf("%d\n", ft_is_prime(2147483646));
    printf("%d\n", ft_is_prime(1));
    printf("%d", ft_is_prime(0));
}
