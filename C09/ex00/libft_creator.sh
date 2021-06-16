# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makhtar <makhtar@student.42.ae>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 11:47:47 by makhtar           #+#    #+#              #
#    Updated: 2021/06/08 11:47:49 by makhtar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c
gcc -c ft_putstr.c
gcc -c ft_strcmp.c
gcc -c ft_strlen.c
gcc -c ft_swap.c
ar rc libft.a ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o
