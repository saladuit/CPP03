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

/* **************************Loggers***************************************** */

void ClapTrap::log(void) const
{
		std::cout << "Name: " << this->_name << std::endl
							<< "Hit points: " << this->_hit_points << std::endl
							<< "Energy points: " << this->_energy_points << std::endl
							<< "Attack damage: " << this->_attack_damage << std::endl;
}

/* **************************Orthodox_Canonical_Form************************* */

ClapTrap::ClapTrap()
		: _name("ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
		this->log();
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
		: _name(rhs._name), _hit_points(rhs._hit_points),
			_energy_points(rhs._energy_points), _attack_damage(rhs._attack_damage)
{
		std::cout << "ClapTrap called Copy constructor" << std::endl;
		this->log();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
		if (this != &rhs)
		{
				this->_hit_points = rhs._hit_points;
				this->_energy_points = rhs._energy_points;
				std::cout << "Copy assignment operator called" << std::endl;
				this->log();
		}
		return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }
