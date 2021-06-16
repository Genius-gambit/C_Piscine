/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaidar <yhaidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:27:34 by yhaidar           #+#    #+#             */
/*   Updated: 2021/05/30 10:25:51 by yhaidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

int		is_valid_condition(char *cond);
int		rush(void);

int		main(int argc, char *argv[])
{
	if (argc != 2 || !(is_valid_condition(argv[1]) && rush()))
		write(1, "Error\n", 6);
	return (0);
}
