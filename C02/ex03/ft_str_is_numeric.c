/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:45:05 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:21:52 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0')
		{
			alpha = 0;
		}
		else if (str[i] > '9')
		{
			alpha = 0;
		}
		i++;
	}
	return (alpha);
}

int main(void)
{
	int i;

	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric("Awesome"));
	printf("%d", ft_str_is_numeric(""));
	return (0);
}