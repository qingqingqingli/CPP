# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/28 17:18:10 by qli           #+#    #+#                  #
#    Updated: 2020/11/28 17:18:10 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= 	ex01

SOURCE			= 	main.cpp \
					AWeapon.cpp\
					PlasmaRifle.cpp\
					PowerFist.cpp\
					Enemy.cpp\
					SuperMutant.cpp\
					RadScorpion.cpp\
					Character.cpp

OBJECT			=	$(SOURCE:.cpp=.o)

COMPILE			= 	clang++

FLAGS			= 	-Wall -Wextra -Werror -std=c++98

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

all: $(NAME)

%.o: %.cpp
	@echo "$(GREY)Compiling...				$<"
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@echo "$(GREEN)----------------------------------------------------"
	@$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)
	@echo "Executable				./$(NAME) $(RESET)"

clean:
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJECT)
	@echo "$(GRAY)REMOVED O-FILES $(RESET)"

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)
	@echo "$(GRAY)REMOVED EXECUTABLE FILE $(RESET)"

re: fclean all

.PHONY: all clean fclean re