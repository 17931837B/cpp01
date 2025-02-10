/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:28:03 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:28:03 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void complain(std::string level);
};

#endif
