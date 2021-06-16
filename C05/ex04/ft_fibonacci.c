/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:40:13 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/31 10:40:15 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int main(void)
{
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(10));
    printf("%d\n", ft_fibonacci(-2147483648));
    printf("%d\n", ft_fibonacci(42));
    return (0);
}
