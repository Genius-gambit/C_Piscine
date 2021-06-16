/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:48:58 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:22:46 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
		{
			alpha = 0;
		}
		else if (str[i] > 'Z')
		{
			alpha = 0;
		}
		i++;
	}
	return (alpha);
}


int main(void)
{
	printf("%d\n", ft_str_is_uppercase("42"));
	printf("%d\n", ft_str_is_uppercase("is"));
	printf("%d\n", ft_str_is_uppercase("AWESOME"));
	printf("%d", ft_str_is_uppercase(""));
	return (0);
}