/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:01:11 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/13 15:12:19 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	// Création d'un ClapTrap
	ClapTrap clap("Clappy");
	clap.attack("un mur");
	clap.takeDamage(3);
	clap.beRepaired(2);
	std::cout << "ClapTrap HP: " << clap.get_hitpoint() << std::endl;
	std::cout << "ClapTrap EP: " << clap.get_energypoint() << std::endl;

	std::cout << "--------------------------" << std::endl;

	// Création d'un ScavTrap
	ScavTrap scav("Scavy");
	scav.attack("une cible");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();
	std::cout << "ScavTrap HP: " << scav.get_hitpoint() << std::endl;
	std::cout << "ScavTrap EP: " << scav.get_energypoint() << std::endl;

	std::cout << "--------------------------" << std::endl;
	
	// Création d'un FragTrap
	FragTrap frag("Fragy");
	frag.attack("une cible");
	frag.takeDamage(40);
	frag.beRepaired(20);
	frag.highFivesGuys();
	std::cout << "FragTrap HP: " << frag.get_hitpoint() << std::endl;
	std::cout << "FragTrap EP: " << frag.get_energypoint() << std::endl;
	
	std::cout << "--------------------------" << std::endl;
	
	return 0;
}


