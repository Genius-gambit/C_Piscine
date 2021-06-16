/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:26:06 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/29 12:44:00 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}

int main(void)
{
    printf("%d\n", ft_strncmp("Mu", "Mu", 2));
    printf("%d\n", ft_strncmp("Arnold", "Schwarzenegger", 5));
    printf("%d", ft_strncmp("Rise", "", 6));
    return(0);
}
