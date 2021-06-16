/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:49:33 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/07 12:11:15 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *src)
{
	int		i;
	char	*ptr;

	ptr = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	tmp_stock;
	t_stock_str	*strs_stocks;

	if ((strs_stocks = malloc(sizeof(t_stock_str) * (ac + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tmp_stock.size = ft_strlen(av[i]);
		tmp_stock.str = av[i];
		if ((tmp_stock.copy = ft_strcpy(av[i])) == NULL)
			return (NULL);
		strs_stocks[i++] = tmp_stock;
	}
	strs_stocks[ac].str = 0;
	return (strs_stocks);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int					main(void)
{
	char	*strs[4];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		size;

	str1 = "Bonjour";
	str2 = "les";
	str3 = "chacaux";
	str4 = "!";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	return (0);
}
