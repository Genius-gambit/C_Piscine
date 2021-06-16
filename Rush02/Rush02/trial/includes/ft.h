/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:47:22 by makhtar           #+#    #+#             */
/*   Updated: 2021/06/05 20:00:52 by makhtar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#define unsigned long long int "ullt"

typedef struct	s_list
{
	unsigned long long int	nb;
	char	*val;
}				t_list;

ullt	ft_atoi(const char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(unsigned long long int fd);
char	*ft_getval(unsigned long long int fd, char *c);
t_list	*process(char *file);

#endif
