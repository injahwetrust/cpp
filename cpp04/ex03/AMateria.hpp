/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:47:58 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 17:38:36 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual	~AMateria();
		AMateria&	operator=(const AMateria& toCpy);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

