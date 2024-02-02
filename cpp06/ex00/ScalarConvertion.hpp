/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:26:20 by bvaujour          #+#    #+#             */
/*   Updated: 2024/02/02 18:32:20 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>

class ScalarConvertion
{
	public:
	static void	convert(const std::string &input);
	private:
		ScalarConvertion();
};