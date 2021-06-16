/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:54:26 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/31 11:04:07 by makhtar          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int				not_found;
	unsigned int	i;

	i = (unsigned int)nb;
	not_found = 1;
	while (not_found)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

int main(void)
{
    printf("%d\n", ft_find_next_prime(2));
    printf("%d\n", ft_find_next_prime(4));
    printf("%d\n", ft_find_next_prime(625));
    printf("%d\n", ft_find_next_prime(12435546));
    printf("%d\n", ft_find_next_prime(-2));
    printf("%d", ft_find_next_prime(0));
    return (0);
}
