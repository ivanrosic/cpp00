/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:59:13 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/24 16:59:16 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

void Phonebook::_ft_print_resize(std::string line)
{
	line.resize(9);
	std::cout << line << ".|";
}
void Phonebook::_ft_print_space(std::string line)
{
	int i;

	i = line.size();
	while(i <= 9)
	{
		std::cout << " ";
		i++;
	}
	std::cout << line << "|";
}

void Phonebook::_ft_print_all(void)
{
	int n = 0;
	std::string line;

	std::cout << "index     |prenom    |nom       |pseudo    |" << std::endl;
	while(n < _i)
	{
		std::cout << "         " << n << "|";
		line = _c[n].first_name;
		if(line.size() < 10)
			_ft_print_space(line);
		else
			_ft_print_resize(line);
		line = _c[n].last_name;
		if(line.size() < 10)
			_ft_print_space(line);
		else
			_ft_print_resize(line);
		line = _c[n].login;
		if(line.size() < 10)
			_ft_print_space(line);
		else
			_ft_print_resize(line);
		std::cout << std::endl;
		n++;
	}
}

void Phonebook::_ft_print_contact(int n)
{
	std::cout << std::endl << "first name : " << _c[n].first_name << std::endl;
	std::cout << "last name : " <<_c[n].last_name << std::endl;
	std::cout << "nickname : " << _c[n].nickname << std::endl;
	std::cout << "login : " << _c[n].login << std::endl;
	std::cout << "postal address : " << _c[n].postal_address << std::endl;
	std::cout << "email address : "<< _c[n].email_address << std::endl;
	std::cout << "phone number : " << _c[n].phone_number << std::endl;
	std::cout << "birthday date : " << _c[n].birthday_date << std::endl;
	std::cout << "favorite meal : " << _c[n].favorite_meal << std::endl;
	std::cout << "underwear color : " << _c[n].underwear_color << std::endl;
	std::cout << "darkest secret : " << _c[n].darkest_secret << std::endl << std::endl;
}

void Phonebook::_ft_search(void)
{
	std::string line;
	int n;

	if(_i == 0)
	{
		std::cout << "need contact for search" << std::endl;
		return;
	}
	_ft_print_all();
	std::cout << std::endl <<"select contact: ";
	std::getline(std::cin, line);
	n = std::stoi(line);
	if(n < _i)
		_ft_print_contact(n);
	else
		std::cout << "contact don't exist" << std::endl;
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
