/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:46:57 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 17:01:44 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap &other);
		DiamondTrap&	operator=(DiamondTrap& other);
		DiamondTrap(std::string name);
		void	WhoAmI();
	private:
		std::string	_name;
};

#endif