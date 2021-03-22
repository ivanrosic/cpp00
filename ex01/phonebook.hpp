/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:44:41 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/22 17:47:11 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Phonebook	{

	private:

		class	Contact	{

			public:
				std::string first_name;
				std::string last_name;
				std::string nickname;
				std::string login;
				std::string postal_address;
				std::string email_address;
				std::string phone_number;
				std::string birthday_date;
				std::string favorite_meal;
				std::string underwear_color;
				std::string darkest_secret;

		};
		Contact _c[8];
		int _i;
		void _ft_add(void);
		void _ft_search(void);
		void _ft_print_all(void);
		void _ft_print_all(std::string line);


	public:

		int ft_cmd(std::string cmd);
		Phonebook( void );
		~Phonebook( void );


};

#endif
