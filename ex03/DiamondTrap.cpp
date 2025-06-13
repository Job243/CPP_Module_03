/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:14:20 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/13 16:37:15 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap(), ScavTrap()
{
	std::cout << "Default DiamondTrap constructor has been called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap " << this->name << " has been created !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " is dead." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}
