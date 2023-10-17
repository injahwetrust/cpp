# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 15:12:47 by bvaujour          #+#    #+#              #
#    Updated: 2023/10/17 16:59:10 by bvaujour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FFVII

SRC			= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp

INCLUDES	= AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp

OBJ			= $(SRC:.cpp=.o)

DEP			= $(OBJ:.o=.d)

CC			= c++

FLAGS		= -Wall -Werror -Wextra -std=c++98 -MMD

all: $(NAME)

%.o: %.cpp $(INLUDES) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re 