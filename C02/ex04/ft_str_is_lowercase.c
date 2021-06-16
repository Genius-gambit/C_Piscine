/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:48:39 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:22:24 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a')
		{
			alpha = 0;
		}
		else if (str[i] > 'z')
		{
			alpha = 0;
		}
		i++;
	}
	return (alpha);
}


int main(void)
{
	printf("%d\n", ft_str_is_lowercase("42"));
	printf("%d\n", ft_str_is_lowercase("is"));
	printf("%d\n", ft_str_is_lowercase("Awesome"));
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}