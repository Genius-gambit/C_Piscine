/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:58:45 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/23 15:58:59 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int min_val;
	int j;
	int i;

	i = 0;
	while (i < size)
	{
		min_val = *(tab + i);
		j = i + 1;
		while (j < size)
		{
			if (min_val > *(tab + j))
			{
				min_val = *(tab + j);
				*(tab + j) = *(tab + i);
				*(tab + i) = min_val;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	int tab[5] = {19, 10, 8, 17, 9};
	int size = 5;
	int i;
	
	i = 0;
	while (tab[i] != '\0')
	{
		printf("%d ", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_sort_int_tab(tab, size);
	while (tab[i] != '\0')
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}