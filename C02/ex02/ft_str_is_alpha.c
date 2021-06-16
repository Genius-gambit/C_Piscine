/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:41:19 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:21:24 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
		{
			alpha = 0;
		}
		else if ((str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
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

	printf("%d\n", ft_str_is_alpha("42"));
	printf("%d\n", ft_str_is_alpha("Awesome"));
	printf("%d", ft_str_is_alpha(""));
	return (0);
}
