/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:54:05 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 16:24:26 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((src[j] != '\0') && (j < (size - 1)))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}


int main(void)
{
	char acopy[100];
	char bcopy[100];
	char ccopy[100];
    char a[] = "Hi^36ae[Z}>dw i am s4Rf van;";
    char b[] = "salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";
    char c[] = "42 is awesome";

	printf("%u\n", ft_strlcpy(acopy, a, 15));
	printf("%u\n", strlcpy(acopy, a, 15));
	printf("%u\n", ft_strlcpy(bcopy, b, 20));
	printf("%u\n", strlcpy(bcopy, b, 20));
	printf("%u\n", ft_strlcpy(ccopy, c, 5));
	printf("%u\n", strlcpy(ccopy, c, 5));
	return(0);
}
