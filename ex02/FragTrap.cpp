/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 05:45:13 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/18 18:19:34 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "FragTrap" << _name << "has no energy to attack" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points -= 1;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " giving high five" << std::endl; 
}