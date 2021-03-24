# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 16:46:17 by ivarosic          #+#    #+#              #
#    Updated: 2021/03/24 17:01:36 by ivarosic         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME     := phonebook

SRCS     := main.cpp		\
			phonebook.cpp	\

HDRS     := phonebook.hpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re
