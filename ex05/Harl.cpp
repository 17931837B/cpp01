/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:27:52 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:27:52 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	int	i;
	void	(Harl::*func[4])(void);
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	func[0] = &Harl::debug;
	func[1] = &Harl::info;
	func[2] = &Harl::warning;
	func[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*func[i])();
			return ;
		}
		i++;
	}
	std::cout << "Not valid: " << level << '\n';
}
