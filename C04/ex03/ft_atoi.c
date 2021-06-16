/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:35:04 by makhtar           #+#    #+#             */
/*   Updated: 2021/05/30 14:48:01 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += (*str - '0');
		str++;
	}
	return (nbr * sign);
}


int main(void)
{
    printf("%d\n", ft_atoi("        -+-+-+-+-+---+-+-+-+++454545sdfkjgsjdf+-"));
    printf("%d\n", ft_atoi("        -+-+-+-+-+--+-+++454545sdfkjgsjdf"));
    printf("%d\n", ft_atoi("        -+-+-+--+++788787ahsfka+-"));
    return (0);
}
