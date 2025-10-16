/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:36:31 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/16 15:47:30 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string newType);
		const std::string&	getType() const;
	private:
		std::string _type;
};
