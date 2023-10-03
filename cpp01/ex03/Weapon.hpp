/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:54:29 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/08 15:29:35 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();
		void		setType(std::string name);
		std::string	getType();
	private:
		std::string _name;
};

#endif