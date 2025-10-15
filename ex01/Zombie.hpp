/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:58:44 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/15 19:57:04 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>

struct Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void) const;
		void setName(std::string name);
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
