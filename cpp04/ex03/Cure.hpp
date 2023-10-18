/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:31:43 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/18 19:46:33 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "Character.hpp"
class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure*	clone() const;
		void	use(ICharacter& target);
};
