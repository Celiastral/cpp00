/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:52:58 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 13:53:43 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>

typedef enum e_type
{
	e_first_name,
	e_last_name,
	e_nickname,
	e_phone_nbr,
	e_secret
}	t_type;

class Contact
{
	public :
		std::string	get_value(int type);
		int			is_valid();
		void		set_value(int type, std::string value);
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string secret;

};

#endif