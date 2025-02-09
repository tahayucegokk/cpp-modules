#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
	name = "ScavTrap";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) {
	this->name = name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap custom constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	name = scavTrap.name;
	hit_points = scavTrap.hit_points;
	energy_points = scavTrap.energy_points;
	attack_damage = scavTrap.attack_damage;
	return ( *this );
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Default destructor called" << std::endl;
}

void ScavTrap::attack( const std::string& target  ) {
		if (energy_points > 0 && hit_points > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target \
		<< ", causing " << attack_damage \
		<< " points of damage!" << std::endl;
		energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in GateKeeper mode." << std::endl;
}
