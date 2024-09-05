/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:54:08 by eandre            #+#    #+#             */
/*   Updated: 2024/09/05 14:21:59 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);	
	}
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i][j];
		}
	}
	std::cout << std::endl;
}
