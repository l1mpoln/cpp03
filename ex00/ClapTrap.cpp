/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:34 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/16 21:45:57 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0) 
{
    std::cout << "Constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) 
{
    std::cout << "Constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_hit_points <= 0 || _energy_points <= 0)
    {
        std::cout << "Clap trap" << _name << "has no energy to attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points <= 0 || _hit_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy or hitpoints to repair!" << std::endl;
        return ;
    }
    if (_hit_points + amount > 10)
    {
        std::cout << "ClapTrap " << _name << " has max hitpoints!" << std::endl;
        _hit_points = 10;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
    _hit_points += amount;
    _energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)_hit_points <= amount)
    {
        _hit_points = 0;
        std::cout << "ClapTrap " << _name << " has no hitpoints left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    _hit_points -= amount;
}
