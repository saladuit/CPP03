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

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "Color.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("SC4V-TP", HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE)
{
	log_construction("ScavpTrap called default constructor");
}

ScavTrap::ScavTrap(const std::string name)
	: ClapTrap(name, HIT_POINTS, ENERGY_POINTS, ATTACK_DAMAGE)
{
	log_construction("ScavpTrap called named constructor");
}

void ScavTrap::guardGate()
{
	logMessage(CYN, "ScavTrap is now in Gate keeper mode");
}

ScavTrap::~ScavTrap()
{
	log_is_deconstructed();
}
