/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:54:05 by eandre            #+#    #+#             */
/*   Updated: 2024/09/06 19:12:16 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	is_number(std::string str)
{
	std::string::const_iterator i;

	if (str.empty())
		return (1);
	i = str.begin();
	while (i != str.end() && (std::isdigit(*i) || *i == '-' || *i == '+'))
		i++;
	if (i == str.end())
		return (0);
	return (1);
}

void	print_search_upper_tab()
{
	std::cout << "\033[4;36m|";
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|\033[0m";
	std::cout << std::endl;
}