# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pribault <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 10:02:02 by pribault          #+#    #+#              #
#    Updated: 2016/08/20 23:43:02 by pribault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

$(NAME):
	gcc -o $(NAME) -I Headers/ srcs/*.c
	chmod 777 $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

norm:
	norminette srcs Headers
