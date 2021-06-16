/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:55:54 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:24:11 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strupcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c - 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if (str[i] >= '0' && str[i] <= '9')
			cap = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && (cap == 1))
		{
			str[i] = str[i] - 32;
			cap = 0;
		}
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			if ((str[i] < '0') || (str[i] > '9'))
				cap = 1;
		i++;
	}
	return (str);
}

int main(void)
{
    char a[] = "Hi^36ae[Z}>dw i am s4Rf van;";
    char b[] = "salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";
    char c[] = "42 is awesome";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
	return(0);
}
