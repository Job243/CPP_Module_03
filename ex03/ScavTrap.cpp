/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:25:29 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/13 14:19:56 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("noname")
{
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
	std::cout << "Default ScavTrap constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap " << this->name << " has been created !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src):ClapTrap(src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is dead." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
		this->name = rhs.name;
		this->Attack_damage = rhs.Attack_damage;
		this->Energy_point = rhs.Energy_point;
		this->Hit_point = rhs.Hit_point;
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->Energy_point)
	{
		std::cout << "ScavTrap "<< this->name << " has no energy point to attack." << std::endl;
		return ;
	} 
	this->Energy_point -= 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is now in Gate keeper mode !"<< std::endl;
}