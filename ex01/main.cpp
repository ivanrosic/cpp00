/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:58:49 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/24 16:58:51 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string cmd;
	Phonebook p;
	std::cout << "type ADD, SEARCH or EXIT" << std::endl;
	while(1)
	{
		std::cout << "prompt> ";
		std::getline(std::cin, cmd);
		if(p.ft_cmd(cmd) == 0)
			return(0);
	}
	return 0;
}
