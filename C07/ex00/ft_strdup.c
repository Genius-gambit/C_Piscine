/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:30:31 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/04 12:30:38 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i])
	{
		index++;
		i++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)) == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
    printf("%s", ft_strdup("42 is Awesome!"));
    return (0);
}
