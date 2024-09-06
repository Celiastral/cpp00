/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:58:13 by eandre            #+#    #+#             */
/*   Updated: 2024/09/06 19:09:17 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	main(int argc, char **argv)
{
	std::string command;
	Phonebook	Phonebook;

	(void)argv;
	if (argc != 1)
		return (std::cout << "\033[0;31mNo arguments needed!\033[0m" << std::endl, 1);
	while (42)
	{
		std::cout << "\033[0;35mDiscord~\033[0m";
		if (!std::getline(std::cin, command))
				return (std::cout << std::endl, 1);
		if (command == "ADD")
			if (Phonebook.set_contact() == 1)
				return (std::cout << std::endl, 1);
		if (command == "SEARCH")
			if (Phonebook.print_search_contact() == 1)
				return (std::cout << std::endl, 1);
		if (command == "NITRO")
			std::cout << "\033[1;32mONLY 9.99 PER MONTH🗣️ 💯🗣️ 💯\033[0m"<< std::endl;
		if (command == "EXIT")
			break ;
	}
}
