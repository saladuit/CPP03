/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   ClapTrap.hpp                                    |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/24 14:47:32 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/24 14:47:32 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
  public:
	ClapTrap();
	ClapTrap(const ClapTrap &rhs);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();

	ClapTrap(const std::string name);
	ClapTrap(const std::string &name, unsigned int hit_points,
			 unsigned int energy_points, const int attack_damage);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  protected:
	void log_is_deconstructed(void) const;
	void log_construction(std::string message) const;
	void log_no_energy(std::string action) const;
	void log_is_dead(std::string action) const;
	void logMessage(const std::string &color, const std::string &message) const;
	bool canPerformAction(const std::string &action) const;

  private:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	const unsigned int _attack_damage;
	const unsigned int _max_hit_points;
};

#endif
