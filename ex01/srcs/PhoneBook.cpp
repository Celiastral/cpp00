/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:24:10 by eandre            #+#    #+#             */
/*   Updated: 2024/09/05 22:25:21 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

void	Phonebook::set_contact(Contact contact)
{
	
}

std::string	Contact::get_value()
{
	std::cout << Contact::first_name << std::endl;
	std::cout << Contact::last_name << std::endl;
	std::cout << Contact::nickname << std::endl;
	std::cout << Contact::phone_nbr << std::endl;
	std::cout << Contact::secret << std::endl;
	return (Contact::secret);
}

void	Contact::set_first_name(std::string first_name)
{
	Contact::first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	Contact::last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	Contact::nickname = nickname;
}

void	Contact::set_phone_nbr(std::string phone_nbr)
{
	Contact::phone_nbr = phone_nbr;
}

void	Contact::set_secret(std::string secret)
{
	Contact::secret = secret;
}

int	main(int argc, char **argv)
{
	std::string command;
	Contact		contact;
	Phonebook	Phonebook;
	(void)argv;
	if (argc != 1)
	{
		std::cout << "GO FUCK YOURSLEF !" << std::endl;
		return (1);
	}
	while (42)
	{
		std::cin >> command;
		if (command == "ADD")
		{
			std::string value;
			std::cout << "First Name:" << std::endl;
			std::getline(std::cin, value);
			std::cin >> value;
			contact.set_first_name(value);
			std::cout << "Last Name:" << std::endl;
			std::cin >> value;
			contact.set_last_name(value);
			std::cout << "Nickname:" << std::endl;
			std::cin >> value;
			contact.set_nickname(value);
			std::cout << "Phone number:" << std::endl;
			std::cin >> value;
			contact.set_phone_nbr(value);
			std::cout << "Darkest Secret:" << std::endl;
			std::cin >> value;
			contact.set_secret(value);
		}
		if (command == "SEARCH")
			contact.get_value();
		if (command == "EXIT")
			break ;
	}
}
