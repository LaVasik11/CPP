/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:18:27 by gkankia           #+#    #+#             */
/*   Updated: 2025/06/29 16:42:38 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	print_contact(std::string str)
{
	std::cout << "|";
	for (size_t j = 10; j > str.length(); --j)
		std::cout << " ";
	std::cout << str << "|";
}

void	PhoneBook::add_contact(int count_contacts)
{
	Contact		contact;
	std::string	str;

	std::cout << "Enter first name: ";
	std::cin >> str;
	contact.set_first_name(str);
	std::cout << "Enter last name: ";
	std::cin >> str;
	contact.set_last_name(str);
	std::cout << "Enter nickname: ";
	std::cin >> str;
	std::cout << "Enter phone number: ";
	std::cin >> str;
	contact.set_phone_number(str);
	std::cout << "Enter darkest secret: ";
	std::cin >> str;
	contact.set_darkest_secret(str);

	this->contacts[count_contacts] = contact;
}

void	PhoneBook::show_contacts(int count_contact) const
{
	std::string	str;

	for (int i = 0; i < count_contact; ++i)
	{
		str = this->contacts[i - 1].get_first_name();
		print_contact(str);
		str = this->contacts[i - 1].get_last_name();
		print_contact(str);
		str = this->contacts[i - 1].get_nickname();
		print_contact(str);
		str = this->contacts[i - 1].get_phone_number();
		print_contact(str);
	}
}