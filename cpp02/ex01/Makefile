# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmande <anmande@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 10:46:47 by anmande           #+#    #+#              #
#    Updated: 2023/12/15 11:29:31 by anmande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	"Mon premier canon"
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 
SRCS		=	main Fixed
OBJ_DIR		=	bin
OBJ			=	$(foreach src, $(SRCS), $(OBJ_DIR)/$(src).o)

all: 			$(NAME)

$(OBJ_DIR):		
				mkdir $(OBJ_DIR)

$(NAME):		$(OBJ_DIR) $(OBJ) 
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o:	%.cpp
				$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
				find . -type f -name "*.o" -delete
				[ -d bin ] && rmdir $(OBJ_DIR) || true

fclean:			clean
				rm -rf $(NAME) 

re:				fclean all

.PHONY:			clean fclean re