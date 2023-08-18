/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:36 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/18 00:18:00 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap claptrap1("syka");
    ScavTrap scavtrap1("blyat");

    claptrap1.attack("Bandit");
    scavtrap1.attack("Skag");

    claptrap1.takeDamage(4);
    scavtrap1.takeDamage(10);

    claptrap1.beRepaired(2);
    scavtrap1.beRepaired(5);

    scavtrap1.guardGate();

    return 0;
}