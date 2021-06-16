/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:38:32 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/29 13:27:54 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

int main(void)
{
    char a[50] = "Master ";
    char acopy[] = "Stroke";
    char b[50] = "Arnold ";
    char bcopy[]= "Schwarzenegger";
    char c[20] = "";
    char ccopy[]= "Rise";
    printf("%s\n", ft_strncat(a, acopy, 4));
    printf("%s\n", ft_strncat(b, bcopy, 5));
    printf("%s", ft_strncat(c, ccopy, 0));
    return(0);
}
