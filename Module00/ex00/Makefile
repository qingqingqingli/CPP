# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/13 13:52:04 by qli           #+#    #+#                  #
#    Updated: 2020/11/17 11:31:28 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SOURCE	= megaphone.cpp

FLAGS	= -Wall -Wextra -Werror -std=c++98

COMPILE	= clang++

all: $(NAME)

$(NAME):
	@$(COMPILE) $(FLAGS) -o $(NAME) $(SOURCE)

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
