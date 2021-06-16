/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 22:32:28 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 15:51:06 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
    ft_putstr("42 is Awesome!");
    printf("\n");
    ft_putstr("Don't forget to fix the Norme");
    printf("\n");
    ft_putstr("You're welcome");
    return (0);
}
