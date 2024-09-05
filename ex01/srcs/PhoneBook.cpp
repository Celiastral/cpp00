/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:24:10 by eandre            #+#    #+#             */
/*   Updated: 2024/09/05 14:54:55 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

std::string	Contact::get_value()
{
	return (Contact::value);
}

void	Contact::set_value(std::string value)
{
	Contact::value = value;
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		std::cout << "GO FUCK YOURSLEF !" << std::endl;
		return (1);
	}
	while (42)
	{
		Contact		contact;
		std::string command;
		std::cin >> command;
		if (command == "ADD")
		{
			std::string name;
			std::cin >> name;
			contact.set_value(name);
			std::cout << contact.get_value() << std::endl;
		}
		if (command == "EXIT")
			break ;
	}
}
