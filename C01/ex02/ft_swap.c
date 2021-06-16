/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:35:32 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/23 16:03:52 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tempnum;

	tempnum = *a;
	*a = *b;
	*b = tempnum;
}

int main(void)
{
	int a;
	int b;
	
	a = 15;
	b = 54;
	printf("a = %d & b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d & b = %d", a, b);
	return (0);
}