# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsembel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/20 14:12:18 by thsembel          #+#    #+#              #
#    Updated: 2021/09/08 14:46:35 by thsembel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./ClapTrap.cpp \
				./ScavTrap.cpp \
				./main.cpp

INCLUDES	=	./ClapTrap.hpp \
				./ScavTrap.hpp

HEAD		=	./

NAME		= a.out

CC			= clang++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -std=c++98

.c.o:
		@${CC} ${CFLAGS} -I${HEAD} -c $< -o ${<:.cpp=.o}
		@echo "${GREEN}[ OK ]	${ORANGE}${<:.s=.o}${NC}"


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -I${HEAD} -o ${NAME} $(OBJS)
			@echo "${GREEN}program	has been created\n${NC}"

clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}program	deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re
