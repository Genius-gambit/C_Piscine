/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:50:53 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:23:21 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char a[] = "fhasjdhfjadhfk";
    char b[] = "f@#(*#@dfajsajfaj)";
    char c[] = "42 is awesome";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
	return(0);
}
