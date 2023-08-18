/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:36 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/08/16 21:50:47 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap tf("Term");
	ClapTrap tf1("syka");
	tf1 = tf;
	ClapTrap tf2(tf);

	tf.attack("Scrapss");
	tf.takeDamage(5);
	tf1.takeDamage(11);
	tf1.beRepaired(3);
	tf.beRepaired(5);
}