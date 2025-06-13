/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:01:11 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/12 18:05:36 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("Terminator");
	robot.attack("Target1");
	robot.takeDamage(3);
	robot.beRepaired(2);
}

