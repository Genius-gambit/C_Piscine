/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:49:17 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:23:04 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			alpha = 0;
		}
		i++;
	}
	return (alpha);
}

int main(void)
{
	printf("%d\n", ft_str_is_printable("42"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("is"));
	printf("%d\n", ft_str_is_printable("AWESOME"));
	printf("%d\n", ft_str_is_printable("!"));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("\t"));
	printf("%d", ft_str_is_printable(""));
	return (0);
}