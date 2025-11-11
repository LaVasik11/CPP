/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:48:04 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/08 17:48:05 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j]; ++j)
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
	}
	return (0);
}
