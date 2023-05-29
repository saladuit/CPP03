/* ************************************************************************** */
/*                                                                            */
/*                                                    .--.  _                 */
/*   FragTrap.hpp                                    |o_o || |                */
/*                                                   |:_/ || |_ _   ___  __   */
/*   By: safoh <safoh@student.codam.nl>             //   \ \ __| | | \ \/ /   */
/*                                                 (|     | )|_| |_| |>  <    */
/*   Created: 2023/05/29 11:16:15 by safoh        /'\_   _/`\__|\__,_/_/\_\   */
/*   Updated: 2023/05/29 11:16:15 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

/*
	In C++, inheritance can be public, protected, or private, which determines
   the accessibility of the base class members in the derived class:

	- Public Inheritance: When deriving a class from a public base class, public
   members of the base class become public in the derived class and protected
   members of the base class become protected in the derived class. Private
   members are never accessible directly from the derived class, but can be
   accessed through calls to the public and protected members of the base class.

	- Private Inheritance: When deriving from a private base class, public and
   protected members of the base class become private members of the derived
   class. This means they are accessible from within the derived class but not
   from outside the class or from further derived classes.

	Public inheritance models an "is-a" relationship between the base and
   derived classes (e.g., a ScavTrap is a type of ClapTrap), while private
   inheritance can be used to model a "has-a" or "is-implemented-in-terms-of"
   relationship (e.g., a Car has a Engine or a Stack is implemented in terms of
   a LinkedList).
*/

#define HIT_POINTS 100
#define ENERGY_POINTS 100
#define ATTACK_DAMAGE 30

class FragTrap : public ClapTrap
{
  public:
	FragTrap();
	FragTrap(const std::string name);
	~FragTrap();
	void highFivesGuys(void);
};

#endif
