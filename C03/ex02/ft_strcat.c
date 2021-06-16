/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:31:10 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/29 13:25:18 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
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
    printf("%s\n", ft_strcat(a, acopy));
    printf("%s\n", ft_strcat(b, bcopy));
    printf("%s", ft_strcat(c, ccopy));
    return(0);
}
