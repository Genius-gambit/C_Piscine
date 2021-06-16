/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:31:41 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/29 22:31:43 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int main(void)
{
    printf("%d\n", ft_strlen("42 is Awesome"));
    printf("%d\n", ft_strlen("You got it right if you've got 33"));
    printf("%d", ft_strlen("Move on"));
    return (0);
}
