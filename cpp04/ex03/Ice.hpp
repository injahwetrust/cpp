/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:02:15 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/18 19:46:26 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice*	clone() const;
		void	use(ICharacter& target);
};
