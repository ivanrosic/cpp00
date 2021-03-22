/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:54:08 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/22 17:47:13 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook( void ){
	_i = 0;
}

Phonebook::~Phonebook( void ){
}

void Phonebook::_ft_add(void)
{
	if (_i >= 8)
		return;
	std::string line;
	std::cout << "first_name : ";
	std::getline(std::cin, line);
	_c[_i].first_name = line;

	std::cout << "last_name : ";
	std::getline(std::cin, line);
	_c[_i].last_name = line;

	std::cout << "nickname : ";
	std::getline(std::cin, line);
	_c[_i].nickname = line;

	std::cout << "login : ";
	std::getline(std::cin, line);
	_c[_i].login = line;

	std::cout << "postal address : ";
	std::getline(std::cin, line);
	_c[_i].postal_address = line;

	std::cout << "email address : ";
	std::getline(std::cin, line);
	_c[_i].email_address = line;

	std::cout << "phone number : ";
	std::getline(std::cin, line);
	_c[_i].phone_number = line;

	std::cout << "birthday date : ";
	std::getline(std::cin, line);
	_c[_i].birthday_date = line;

	std::cout << "favorite meal : ";
	std::getline(std::cin, line);
	_c[_i].favorite_meal = line;

	std::cout << "underwear color : ";
	std::getline(std::cin, line);
	_c[_i].underwear_color = line;

	std::cout << "darkest secret : ";
	std::getline(std::cin, line);
	_c[_i].darkest_secret = line;

	_i++;
}

void Phonebook::_ft_print_space(std::string line)
{

}
void Phonebook::_ft_print_all(void)
{
	int n = 0;
	std::string line;

	std::cout << "index     |prenom    |nom       |pseudo    " << std::endl;
	while(n < _i)
	{
		std::cout << n << "         |";
		line = _c[n].first_name;
		std::cout << line.size() << std::endl;
		n++;
	}

}

void Phonebook::_ft_search(void)
{
	if(_i == 0)
	{
	std::cout << "need contact for search" << std::endl;
		return;
	}
	_ft_print_all();

}

int Phonebook::ft_cmd(std::string cmd)
{
	if(cmd == "EXIT")
		return 0;
	else if(cmd == "ADD")
	{
		_ft_add();
	}
	else if(cmd == "SEARCH")
		_ft_search();
	else
		std::cout << "only ADD, SEARCH or EXIT has accepted" << std::endl;
	return(1);
}

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
