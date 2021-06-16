/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:45:56 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/29 13:26:58 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && j < (size - 1))
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
	return (i + size);
}

int main(void)
{
    char a[50] = "Master ";
    char acopy[] = "Stroke";
    char b[50] = "Arnold ";
    char bcopy[]= "Schwarzenegger";
    char c[20] = "";
    char ccopy[]= "Rise";
    printf("%d\n", ft_strlcat(a, acopy, 4));
    printf("%d\n", ft_strlcat(b, bcopy, 5));
    printf("%d", ft_strlcat(c, ccopy, 0));
    return(0);
}
