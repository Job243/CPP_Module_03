/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:47:15 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/13 14:59:26 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap("noname")
{
	this->Hit_point = 100;
	this->Energy_point = 100;
	this->Attack_damage = 30;
	std::cout << "Default FragTrap constructor has been called." << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->Hit_point = 100;
	this->Energy_point = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap " << this->name << " has been created !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src):ClapTrap(src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is dead." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << this->name << " requests a positive high five! ✋!" << std::endl;
}
