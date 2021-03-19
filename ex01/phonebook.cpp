/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:54:08 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/19 13:10:00 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook( void ){
	std::cout << "constructor called phonebook" << std::endl;
}

Phonebook::~Phonebook( void ){
	std::cout << "destructor called phonebook" << std::endl;
}

void p::_ft_add(void)
{	
	std::cout << "first_name : ";
	std::cin >> c[i].first_name;
/*
	std::cout << "last_name : ";
	std::cin >> c[i].last_name;

	std::cout << "nickname : ";
	std::cin >> c[i].nickname;

	std::cout << "login : ";
	std::cin >> c[i].login;

	std::cout << "postal address : ";
	std::cin >> c[i].postal_address;

	std::cout << "email address : ";
	std::cin >> c[i].email_address;

	std::cout << "phone number : ";
	std::cin >> c[i].phone_number;

	std::cout << "birthday date : ";
	std::cin >> c[i].birthday_date;

	std::cout << "favorite meal : ";
	std::cin >> c[i].favorite_meal;

	std::cout << "underwear color : ";
	std::cin >> c[i].underwear_color;

	std::cout << "darkest secret : ";
	std::cin >> c[i].darkest_secret;*/
}

int main(void)
{
	std::string cmd;
	Phonebook p;
	std::cout << "type ADD, SEARCH or EXIT" << std::endl;
	while(1)
	{
		std::cout << "prompt> ";
		//use get_in
		std::cin >> cmd;
		if(cmd == "EXIT")
			return 0;
		else if(cmd == "ADD")
		{
				_ft_add();
		}
		else if(cmd == "SEARCH")
			;
		else
			std::cout << "only ADD, SEARCH or EXIT has accepted" << std::endl;
	}
	return 0;
}
