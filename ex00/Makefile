# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 17:31:42 by ivarosic          #+#    #+#              #
#    Updated: 2021/03/24 17:31:44 by ivarosic         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME     := megaphone

SRCS     := megaphone.cpp		\

HDRS     :=
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
