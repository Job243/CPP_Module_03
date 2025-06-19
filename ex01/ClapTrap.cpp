/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:00:00 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/19 15:03:01 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("noname"), Hit_point(100), Energy_point(10), Attack_damage(0)
{
	std::cout << " Default constructor has been used." << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), Hit_point(100), Energy_point(10), Attack_damage(0)
{
	std::cout << this->name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	this->name = src.name;
	this->Attack_damage = src.Attack_damage;
	this->Energy_point = src.Energy_point;
	this->Hit_point = src.Hit_point;
	std::cout << " Claptrap copy constructor has been used." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
		{
			this->name = rhs.name;
			this->Attack_damage = rhs.Attack_damage;
			this->Energy_point = rhs.Energy_point;
			this->Hit_point = rhs.Hit_point;
		}
	std::cout << " Claptrap copy assignment operator has been used." << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->Energy_point)
	{
		std::cout << "Claptrap "<< this->name << " has no energy point to attack." << std::endl;
		return ;
	} 
	this->Energy_point -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hit_point -= amount;
	if (this->Hit_point < 0)
		this->Hit_point = 0;
	std::cout << this->name << " takes " << amount << " damage. Remaining HP: " << this->Hit_point << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->Energy_point)
	{
		std::cout << this->name << " has no energy point to be repaired." << std::endl;
	}
	this->Energy_point -= 1;
	this->Hit_point += amount;
	std::cout << this->name << " repairs " << amount << " HP. Total HP " << this->Hit_point << std::endl;
}

int		ClapTrap::get_energypoint()
{
	return this->Energy_point;
}

int		ClapTrap::get_hitpoint()
{
	return this->Hit_point;
}

std::string	ClapTrap::getName()const
{
	return this->name;
}
