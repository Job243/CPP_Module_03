/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:14:20 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/14 18:21:39 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), name("noname")
{
	this->Hit_point = FragTrap::Hit_point;
	this->Energy_point = ScavTrap::Energy_point;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << "Default DiamondTrap constructor has been called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
	this->Hit_point = FragTrap::Hit_point;
	this->Energy_point = ScavTrap::Energy_point;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap " << this->name << " has been created !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src):ClapTrap(src), ScavTrap(src), FragTrap(src)
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
		this->name = rhs.name;
		ClapTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		FragTrap::operator=(rhs);
	}
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	FragTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}
