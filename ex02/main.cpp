/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:27:16 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:27:16 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPRT = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of the string variable:	"<< &string << '\n';
	std::cout << "The memory address held by stringPTR:		" << stringPRT << '\n';
	std::cout << "The memory address held by stringREF:		" << &stringREF << '\n';
	std::cout << "The value of the string variable:	" << string << '\n';
	std::cout << "The value pointed to by stringPTR:	" << *stringPRT << '\n';
	std::cout << "The value pointed to by stringREF:	" << stringREF << '\n';

	// stringREF = "HI THIS IS MUSCLE";
	// std::cout << "The memory address of the string variable:	"<< &string << '\n';
	// std::cout << "The memory address held by stringPTR:		" << stringPRT << '\n';
	// std::cout << "The memory address held by stringREF:		" << &stringREF << '\n';
	// std::cout << "The value of the string variable:	" << string << '\n';
	// std::cout << "The value pointed to by stringPTR:	" << *stringPRT << '\n';
	// std::cout << "The value pointed to by stringREF:	" << stringREF << '\n';
	return (0);
}
