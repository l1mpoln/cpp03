/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:32 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/18 00:08:47 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif