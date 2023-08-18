/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:36 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/18 06:11:46 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scav("Syka");
    scav.attack("target");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();

    FragTrap frag("Blyat");
    frag.attack("target");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}