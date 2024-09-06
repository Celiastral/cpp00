/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:56:35 by eandre            #+#    #+#             */
/*   Updated: 2024/09/06 19:08:44 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

void	Contact::set_value(int type, std::string value)
{
	if (type == e_first_name)
		Contact::first_name = value;
	else if (type == e_last_name)
		Contact::last_name = value;
	else if (type == e_nickname)
		Contact::nickname = value;
	else if (type == e_phone_nbr)
		Contact::phone_nbr = value;
	else if (type == e_secret)
		Contact::secret = value;
}

int	Contact::is_valid()
{
	return (Contact::first_name.empty() || Contact::last_name.empty()
	|| Contact::nickname.empty() || Contact::phone_nbr.empty()
	|| Contact::secret.empty());
}

std::string	Contact::get_value(int type)
{
	std::string	rv;
	if (Contact::is_valid() == 1)
		return (std::cout << "\033[0;31mThis contact is not set!\033[0m" << std::endl, rv);
	if (type == e_first_name)
		return (Contact::first_name);
	else if (type == e_last_name)
		return (Contact::last_name);
	else if (type == e_nickname)
		return (Contact::nickname);
	else if (type == e_phone_nbr)
		return (Contact::phone_nbr);
	else if (type == e_secret)
		return (Contact::secret);
	return (rv);
}