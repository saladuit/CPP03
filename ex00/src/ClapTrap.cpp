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

/* **************************Public_member_functions************************* */

void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
		return this->log_is_dead("attack");
	if (this->_energy_points == 0)
		return this->log_no_energy("attack");
	this->_energy_points--;
	std::cout << MAG << this->_name << " attacks " << target << " causing "
			  << this->_attack_damage << " points of damage !" << std::endl
			  << "New Energy points: " << this->_energy_points << NC
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << YEL << this->_name << " has already died " << std::endl;
		return;
	}
	this->_hit_points = (_hit_points < amount) ? 0 : _hit_points - amount;
	std::cout << YEL << this->_name << " took " << amount
			  << " points of damage !" << std::endl
			  << "New health_total: " << _hit_points << NC << std::endl;
	if (this->_hit_points == 0)
		std::cout << RED << this->_name << " has died " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int actual_repair_amount;
	if (this->_hit_points == 0)
		return this->log_is_dead("repair");
	if (this->_energy_points == 0)
		return this->log_no_energy("repair");
	this->_energy_points--;
	actual_repair_amount =
		(this->_hit_points + amount > 10) ? 10 - this->_hit_points : amount;
	this->_hit_points += actual_repair_amount;
	std::cout << GRN << this->_name << " repaired itself for "
			  << actual_repair_amount << std::endl
			  << "New health_total: " << _hit_points << std::endl
			  << "Remaining Energy points: " << this->_energy_points << NC
			  << std::endl;
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

	std::cout << CYN << this->_name << " has no energy points left to "
			  << action << NC << std::endl;
}

void ClapTrap::log_is_dead(std::string action) const
{

	std::cout << RED << this->_name << " is dead." << std::endl
			  << action << "ing is not possible... " << NC << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->log("ClapTrap called Copy constructor");
}

/* **************************Orthodox_Canonical_Form************************* */

ClapTrap::ClapTrap()
	: _name("CL4P-TP"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->log("ClapTrap called default constructor");
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
		this->_name = rhs._name;
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
