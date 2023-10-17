/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:38:37 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 18:10:19 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*_slots[4];
		std::string _name;
	public:
		std::string const& getName() const;
		Character(const std::string& name);
		Character(const Character& toCpy);
		// Character&	operator=(const Character& toCpy);
		~Character();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
