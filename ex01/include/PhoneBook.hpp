/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:39:01 by eandre            #+#    #+#             */
/*   Updated: 2024/09/06 19:14:27 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook
{
	public :
		Phonebook();
		int		print_search_contact();
		int		set_contact();
	private :
		int		get_contact_value();
		void	print_contact_value(int index);
		int		index;
		Contact	contact[8];
};

/*					//UTILS\\							*/

int		is_number(std::string str);
void	print_search_upper_tab();