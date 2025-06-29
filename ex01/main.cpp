/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:18:38 by gkankia           #+#    #+#             */
/*   Updated: 2025/06/29 16:42:24 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int	main()
{
	std::string	command;
	PhoneBook	phonebook;
	int			i;
	int			count_contact;

	i = 0;
	count_contact = 0;
	while (command != "EXIT")
	{
		std::cin >> command;
		if (command == "ADD")
		{
			if (count_contact < 8)
				count_contact++;
			i = (i + 1) % 8;
			phonebook.add_contact(i);
		}
		else if (command == "SEARCH")
		{
			std::cout << "|----------------------------------------|\n";
			phonebook.show_contacts(count_contact);
		}
		else
			std::cout << "Invalid command\n";
	}
	return (0);
}
