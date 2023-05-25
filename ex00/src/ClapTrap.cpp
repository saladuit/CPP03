/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ClapTrap.cpp                                    |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/24 14:47:37 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/24 14:47:37 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <Color.hpp>

// geen health, geen energy points

/* **************************Public_member_functions************************* */

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0)
		return this->log_no_energy("attack");
	this->_energy_points--;
	std::cout << MAG "ClapTrap " << this->_name << " attacks " << target
			  << " causing " << this->_attack_damage << " points of damage !"
			  << std::endl
			  << "New Energy points: " << _energy_points << NC << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points = (_hit_points < amount) ? 0 : _hit_points - amount;
	std::cout << YEL "ClapTrap " << this->_name << " took " << amount
			  << " points of damage !" << std::endl
			  << "New health_total: " << _hit_points << NC << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
		return this->log_no_energy("attack");
	this->_energy_points += amount;
}

/* **************************Loggers***************************************** */

void ClapTrap::log(std::string message) const
{
	std::cout << BGRN << message << std::endl
			  << GRN "Name: " << this->_name << std::endl
			  << "Hit points: " << this->_hit_points << std::endl
			  << "Energy points: " << this->_energy_points << std::endl
			  << "Attack damage: " << this->_attack_damage << NC << std::endl;
}

void ClapTrap::log_no_energy(std::string action) const
{

	std::cout << BGRED WHT "No energy points left to " << action << NC
			  << std::endl;
}
/* **************************Orthodox_Canonical_Form************************* */

ClapTrap::ClapTrap()
	: _name("CL4P-TP"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->log("ClapTrap called Default constructor");
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
	: _name(rhs._name), _hit_points(rhs._hit_points),
	  _energy_points(rhs._energy_points), _attack_damage(rhs._attack_damage)
{
	this->log("ClapTrap called Copy constructor");
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->log("Copy assignment operator called");
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED "Destructor called" NC << std::endl;
}
