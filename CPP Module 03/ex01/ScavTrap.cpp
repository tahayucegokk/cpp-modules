
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
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap custom constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& ScavTrap ) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->name = ScavTrap.name;
	this->hit_points = ScavTrap.hit_points;
	this->energy_points = ScavTrap.energy_points;
	this->attack_damage = ScavTrap.attack_damage;
	return ( *this );
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Default destructor called" << std::endl;
}

void ScavTrap::attack( const std::string& target  ) {
		if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attack_damage \
		<< " points of damage!" << std::endl;
		this->energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in GateKeeper mode." << std::endl;
}
