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

class ClapTrap {

public:
  ClapTrap();
  ClapTrap(const std::string name);
  ClapTrap(const ClapTrap &rhs);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap();

  // void attack(const std::string& target);
  // void takeDamage(unsigned int amount);
  // void beRepaired(unsigned int amount);

private:
  const std::string _name;
  int _hit_points;
  int _energy_points;
  const int _attack_damage;
  void log(void) const;
};

#endif
