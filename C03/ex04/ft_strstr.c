/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:40:29 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/29 13:17:01 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}


int main(void)
{
    char a[50] = "42 is Awesome";
    char find1[] = "is";
    char b[50] = "Github for ideas";
    char find2[]= "it";
    char c[20] = "Respect Moulinette, Treat her as your wife";
    char find3[]= "Re";
    printf("%s\n", ft_strstr(a, find1));
    printf("%s\n", ft_strstr(b, find2));
    printf("%s", ft_strstr(c, find3));
    return(0);
}
