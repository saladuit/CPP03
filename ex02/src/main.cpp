/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   main.cpp                                        |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/24 14:47:46 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/24 14:47:46 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ClapTrap.hpp>
#include <Color.hpp>

void test_default_constructor(void)
{
	FragTrap scav_trap;

	scav_trap.attack("Mees");
	scav_trap.highFivesGuys();
	scav_trap.beRepaired(1);
	scav_trap.takeDamage(50);
	scav_trap.takeDamage(50);
}

void test_constructors(void)
{
	FragTrap saladin("Saladin");
	FragTrap saladin_copy(saladin);
	FragTrap default_scavtrap;
	default_scavtrap = saladin;
}

int main(void)
{
	std::cout << std::endl << BCYN "TEST default behaviour:" << std::endl;
	test_default_constructor();
	std::cout << std::endl << BCYN "TEST other constructors:" << std::endl;
	test_constructors();
	return (0);
}
