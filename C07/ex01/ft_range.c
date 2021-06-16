/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:36:12 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/04 13:55:28 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int range;
	int i;
	int *buf;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((buf = malloc(range * sizeof(int))) == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		buf[i] = min + i;
		i++;
	}
	i= 0;
	while (buf[i] != '\0')
    {
        printf("%d, ", buf[i]);
        i++;
    }
	return (buf);
}

int main(void)
{
    ft_range(100, 500);
    printf("\n");
    ft_range(2000, 5000);
    printf("\n");
    ft_range(2000, 500);
    printf("\n");
    ft_range(0, 0);
    return (0);
}
