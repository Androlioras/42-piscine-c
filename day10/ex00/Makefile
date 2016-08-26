# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pribault <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 11:08:02 by pribault          #+#    #+#              #
#    Updated: 2016/08/18 22:12:31 by pribault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC:
	gcc -c -Iincludes/ srcs/*.c
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean GCC
