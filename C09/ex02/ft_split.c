/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:49:33 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/08 09:49:35 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		in_charset(char character, char *charset)
{
	while (*charset)
		if (character == *charset++)
			return (1);
	return (0);
}

int		count_segment(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!in_charset(*str, charset))
		{
			i++;
			while (!in_charset(*str, charset) && *str)
				str++;
			if (!*str)
				break ;
		}
		str++;
	}
	return (i);
}

char	**heck(char *str, char *charset, char *tmp, int i)
{
	char	**strs;
	int		j;

	if ((strs = (char**)malloc(sizeof(char*)
			* (count_segment(str, charset) + 1))) == NULL)
		return (NULL);
	j = 0;
	while (*str)
	{
		while (in_charset(*str, charset))
			str++;
		i = 0;
		while (!in_charset(str[i], charset) && str[i])
			i++;
		if ((tmp = (char*)malloc(sizeof(char) * i + 1)) == NULL)
			return (NULL);
		i = 0;
		while (!in_charset(*str, charset) && *str)
			tmp[i++] = *str++;
		tmp[i] = '\0';
		if (i != 0)
			strs[j++] = tmp;
	}
	strs[j] = 0;
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	return (heck(str, charset, NULL, 0));
}
