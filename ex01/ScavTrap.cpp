/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 00:00:39 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/18 18:16:24 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << _name << " is guarding the gate!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "Scavtrap" << _name << "has no energy to attack" << std::endl;
        return ;
    }
    std::cout << "ScaVtrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points -= 1;
}