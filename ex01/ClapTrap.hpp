/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:00:23 by jmafueni          #+#    #+#             */
/*   Updated: 2025/06/13 14:15:18 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class ClapTrap{
	protected:
		std::string name;
		int	Hit_point;
		int Energy_point;
		int	Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap();

		ClapTrap & operator=(ClapTrap const & rhs);
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		int		get_energypoint();
		int		get_hitpoint();
		std::string	getName()const;
		
};	