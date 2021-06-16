/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:14:02 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/23 16:08:02 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int swap;

	index = 0;
	while (index < (size / 2))
	{
		swap = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = swap;
		index++;
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
	ft_rev_int_tab(tab, size);
	while (tab[i] != '\0')
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}