/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:21:04 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/28 12:21:06 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main(void)
{
    printf("%d\n", ft_strcmp("Mu", "Mu"));
    printf("%d\n", ft_strcmp("Arnold", "Schwarzenegger"));
    printf("%d", ft_strcmp("Rise", ""));
    return(0);
}
