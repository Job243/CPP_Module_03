/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:01:11 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/14 18:15:05 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap bob("Bob");
	DiamondTrap alice("Alice");

	std::cout << std::endl;

	bob.attack("Alice");
	alice.attack("Bob");

	std::cout << std::endl;

	bob.whoAmI();
	alice.whoAmI();

	std::cout << std::endl;

	return 0;
}


