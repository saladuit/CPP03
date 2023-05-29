/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ScavTrap.cpp                                    |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/29 09:36:56 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/29 09:36:56 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

/* **************************Orthodox_Canonical_Form************************* */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "Color.hpp"

FragTrap::FragTrap()
	: ClapTrap("SC4V-TP", HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE)
{
	log_construction("FragTrap called default constructor");
}

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name, HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE)
{
	log_construction("FragTrap called named constructor");
}

void FragTrap::highFivesGuys()
{
	logMessage(CYN, "FragTrap is now in Gate keeper mode");
}

FragTrap::~FragTrap()
{
	log_is_deconstructed();
}
