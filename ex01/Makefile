# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrizhakov <mrizhakov@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 17:37:29 by mrizhakov         #+#    #+#              #
#    Updated: 2024/02/03 15:44:15 by mrizhakov        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Phonebook.class.cpp / / 
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = Phonebook

${EXECUTABLE}: Phonebook.class.o
	${CC} ${FLAGS} $^ -o $@

Phonebook.class.o: ${SRC}
	${CC} ${FLAGS} -c $^

clean:
	rm *.o Phonebook