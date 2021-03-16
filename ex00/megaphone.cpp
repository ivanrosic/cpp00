/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivarosic <ivarosic@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:33:47 by ivarosic          #+#    #+#             */
/*   Updated: 2021/03/16 09:59:58 by ivarosic         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;
	char c;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while(i < ac)
		{
			j = 0;
			while(av[i][j])
			{
				if(av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					c = toupper(av[i][j]);
					std::cout << c;
				}
				else
					std::cout << av[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
