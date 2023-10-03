# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 11:46:18 by bvaujour          #+#    #+#              #
#    Updated: 2023/09/08 15:33:18 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = HumanA.hpp Weapon.hpp

SRC = main.cpp HumanA.cpp Weapon.cpp

NAME = freeViolence

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

CC = c++

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all		: $(NAME)

$(NAME)	: $(INLUDES) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re	: fclean all

.PHONY: all clean fclean re