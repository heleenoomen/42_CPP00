/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoomen <hoomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:06:42 by hoomen            #+#    #+#             */
/*   Updated: 2023/01/06 19:57:58 by hoomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void testClapTrap() {
  std::cout << "\033[48:5:208m -----### TESTING CLAPTRAP ###-----\033[0m\n";
  std::cout << "\033[1;33m ---Default constructor for ClapTrap a---\033[0m\n";
  ClapTrap a;
  std::cout << "\033[1;33m ---Tests ClapTrap a---\033[0m\n";
  a.attack("Julian");
  a.takeDamage(5);
  a.beRepaired(1);
  a.takeDamage(10);
  a.beRepaired(5);
  a.attack("a random robot");
  std::cout << "\033[1;33m ---String constructor for ClapTrap b---\033[0m\n";
  ClapTrap b("Bobby");
  std::cout << "\033[1;33m ---Tests ClapTrap b---\033[0m\n";
  for (int i = 0; i < 12; i++) b.attack("Jane");
  b.beRepaired(2);
  b.beRepaired(4);
  std::cout << "\033[1;33m ---Copy constructor for ClapTrap c, copy from "
               "b---\033[0m\n";
  ClapTrap c(b);
  std::cout << "\033[1;33m ---Test ClapTrap c---\033[0m\n";
  c.attack("Reinhold");
  std::cout << "\033[1;33m ---Deconstructors---\033[0m\n";
}

void testScavTrap() {
  std::cout << "\033[48:5:208m -----### TESTING SCAVTRAP ###-----\033[0m\n";
  std::cout << "\033[1;33m ---Default constructor for ScavTrap a---\033[0m\n";
  ScavTrap a;
  std::cout << "\033[1;33m ---Tests ScavTrap a---\033[0m\n";
  a.attack("Gary");
  a.takeDamage(21);
  a.beRepaired(1);
  for (int i = 0; i < 50; i++) a.attack("Gary");
  a.beRepaired(1);
  a.guardGate();
  std::cout << "\033[1;33m ---String constructor for ScavTrap b "
               "(\"Gingy\")---\033[0m\n";
  ScavTrap b("Gingy");
  std::cout << "\033[1;33m ---Tests ScavTrap b---\033[0m\n";
  b.attack("Gumy");
  b.takeDamage(95);
  b.beRepaired(3);
  b.guardGate();
  std::cout << "\033[1;33m ---Copy constructor for ScavTrap c, copy of "
               "ScavTrap b---\033[0m\n";
  ScavTrap c(b);
  std::cout << "\033[1;33m ---Tests ScavTrap c---\033[0m\n";
  c.attack("Gury");
  c.guardGate();
  c.takeDamage(3);
  c.beRepaired(5);
  std::cout << "\033[1;33m ---Deconstructors---\033[0m\n";
}

void testFragTrap() {
  std::cout << "\033[48:5:208m -----### TESTING FRAGTRAP ###-----\033[0m\n";
  std::cout << "\033[1;33m ---Default constructor for FragTrap a---\033[0m\n";
  FragTrap a;
  std::cout << "\033[1;33m ---Tests FragTrap a---\033[0m\n";
  a.highFiveGuys();
  a.attack("an innocent bystander");
  a.takeDamage(92);
  a.beRepaired(1);
  a.takeDamage(11);
  a.attack("a giant robot");
  std::cout << "\033[1;33m ---String constructor for FragTrap b "
               "(\"Dave\")---\033[0m\n";
  FragTrap b("Dave");
  std::cout << "\033[1;33m ---Tests FragTrap b---\033[0m\n";
  b.highFiveGuys();
  for (int i = 0; i < 101; i++) b.attack("Gary");
  b.beRepaired(3);
  std::cout << "\033[1;33m ---Copy constructor for FragTrap c (copy form "
               "FragTrap b)---\033[0m\n";
  FragTrap c(b);
  std::cout << "\033[1;33m ---Tests FragTrap c---\033[0m\n";
  c.attack("Juliard");
  c.highFiveGuys();
  std::cout << "\033[1;33m ---Deconstructors---\033[0m\n";
}

void testDiamondTrap() {
  std::cout << "\033[48:5:208m -----### TESTING DIAMONDTRAP ###-----\033[0m\n";
  std::cout << "\033[1;33m ---String constructor for DiamondTrap a "
               "(\"Katy\")---\033[0m\n";
  DiamondTrap a("Katy");
  std::cout << "\033[1;33m ---Tests DiamondTrap a---\033[0m\n";
  a.whoAmI();
  a.attack("Juniper2");
  a.takeDamage(16);
  a.beRepaired(1);
  std::cout << "\033[1;33m ---Copy constructor for DiamondTrap b, copied from "
               "DiamondTrap a---\033[0m\n";
  DiamondTrap b(a);
  std::cout << "\033[1;33m ---Tests DiamondTrap b---\033[0m\n";
  b.whoAmI();
  b.attack("Jill");
  b.takeDamage(5);
  b.beRepaired(1);
  std::cout
      << "\033[1;33m ---Default constructor for DiamondTrap c---\033[0m\n";
  DiamondTrap c;
  c.whoAmI();
  c.attack("Tammy");
  c.takeDamage(13);
  std::cout << "\033[1;33m ---Copy assignment operator, assign DiamondTrap b "
               "to DiamondTrap c---\033[0m\n";
  c = b;
  std::cout << "\033[1;33m ---Tests DiamondTrap c---\033[0m\n";
  c.whoAmI();
  c.attack("Joe");
  c.takeDamage(13);
  c.beRepaired(6);
  std::cout << "\033[1;33m ---Deconstructors---\033[0m\n";
}

int main() {
  testClapTrap();
  std::cout << '\n';
  testScavTrap();
  std::cout << '\n';
  testFragTrap();
  std::cout << '\n';
  testDiamondTrap();
  std::cout << '\n';
}
