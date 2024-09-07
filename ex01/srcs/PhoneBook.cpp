/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:24:10 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 13:00:59 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

Phonebook::Phonebook()
{
	Phonebook::index = 0;
}

void	Phonebook::print_contact_value(int index)
{
	std::cout << "\033[0;34m########## Contact " << index << " ##########\033[0m" << std::endl;
	std::cout << "\033[0;33mFirst Name:\033[0m" << Phonebook::contact[index].get_value(0) << std::endl;
	std::cout << "\033[0;33mLast Name:\033[0m" << Phonebook::contact[index].get_value(1) << std::endl;
	std::cout << "\033[0;33mNickname:\033[0m" << Phonebook::contact[index].get_value(2) << std::endl;
	std::cout << "\033[0;33mPhone Number:\033[0m" << Phonebook::contact[index].get_value(3) << std::endl;
	std::cout << "\033[0;33mDarkest secret:\033[0m" << Phonebook::contact[index].get_value(4) << std::endl;
	std::cout << "\033[0;34m################################\033[0m" << std::endl;
}

int	Phonebook::get_contact_value()
{
	int			index;
	std::string value;

	while (42)
	{
		std::cout << "Index:";
		if (!std::getline(std::cin, value))
			return (1);
		if (value.empty())
			std::cout << "\033[0;31mYou need to tell the index number!\033[0m" << std::endl;
		if (!value.empty())
		{
			if (value == "BACK")
				return (0);
			if (is_number(value) == 1)
				std::cout << "\033[0;31mThe value needs to be a number!\033[0m" << std::endl;
			else
			{	
				index = std::atoi(value.c_str());
				if (index < 8 && index >= 0)
					break ;
				else
					std::cout << "\033[0;31mYour index number is outside the phonebook limits!\033[0m" << std::endl;
			}
		}
	}
	int	i = 0;
	if (Phonebook::contact[index].is_valid() == 1)
		return (Phonebook::contact[index].get_value(i), 0);
	print_contact_value(index);
	return (0);
}

int	Phonebook::set_contact()
{
	std::string value;
	if (index == 8)
		index = 0;
	while (42)
	{
		std::cout << "\033[0;33mFirst Name:\033[0m";
		if (!std::getline(std::cin, value))
			return (1);
		if (value.empty())
			std::cout << "\033[0;31mYou need to set your first name!\033[0m" << std::endl;
		if (!value.empty())
			break ;
	}
	Phonebook::contact[index].set_value(e_first_name, value);
	while (42)
	{
		std::cout << "\033[0;33mLast Name:\033[0m";
		if (!std::getline(std::cin, value))
			return (1);
		if (value.empty())
			std::cout << "\033[0;31mYou need to set your last name!\033[0m" << std::endl;
		if (!value.empty())
			break ;
	}
	Phonebook::contact[index].set_value(e_last_name, value);
	while (42)
	{
		std::cout << "\033[0;33mNickname:\033[0m";
		if (!std::getline(std::cin, value))
			return (1);
		if (value.empty())
			std::cout << "\033[0;31mYou need to set your nickname!\033[0m" << std::endl;
		if (!value.empty())
			break ;
	}
	Phonebook::contact[index].set_value(e_nickname, value);
	while (42)
	{
		std::cout << "\033[0;33mPhone number:\033[0m";
		if (!std::getline(std::cin, value))
			return (1);
		if (value.empty())
			std::cout << "\033[0;31mYou need to set your phone number!\033[0m" << std::endl;
		if (!value.empty())
			break ;
	}
	Phonebook::contact[index].set_value(e_phone_nbr, value);
	while (42)
	{
		std::cout << "\033[0;33mDarkest Secret:\033[0m";
		if (!std::getline(std::cin, value))
			return (1);
		if (value.empty())
			std::cout << "\033[0;31mYou need to set your darkest secret!\033[0m" << std::endl;
		if (!value.empty())
			break ;
	}
	Phonebook::contact[index].set_value(e_secret, value);
	Phonebook::index++;
	return (0);
}

int	Phonebook::print_search_contact()
{
	int	i;
	int	type;

	i = 0;
	if (Phonebook::contact[i].is_valid() == 1)
		return (std::cout << "\033[0;31mNo contact yet!\033[0m" << std::endl, 0);
	print_search_upper_tab();
	while (i < 8)
	{
		type = 0;
		if (Phonebook::contact[i].is_valid() == 0)
		{
			std::cout << "|";
			std::cout << std::setw(10) << i;
			while (type < 3)
			{
				std::cout << "|";
				if (Phonebook::contact[i].get_value(type).length() > 10)
				{
					std::cout << std::setw(9);
					std::cout << Phonebook::contact[i].get_value(type).substr(0, 9) << ".";
				}
				else
				{
					std::cout << std::setw(10);
					std::cout << Phonebook::contact[i].get_value(type).substr(0, 10);
				}
				type++;
			}
			std::cout << "|" << std::endl;
		}
		i++;
	}
	if (Phonebook::get_contact_value() == 1)
		return (1);
	return (0);
}
