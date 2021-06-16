/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:40:40 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/01 11:46:40 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

int main(void)
{
    printf("%d\n", ft_sqrt(49));
    printf("%d\n", ft_sqrt(625));
    printf("%d\n", ft_sqrt(-2147483648));
    printf("%d\n", ft_sqrt(2147395600));
    printf("%d\n", ft_sqrt(0));
    printf("%d", ft_sqrt(48));
    return (0);
}
