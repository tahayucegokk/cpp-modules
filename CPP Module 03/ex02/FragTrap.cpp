#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	name = "FragTrap";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) {
	this->name = name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap custom constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& fragTrap ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=( const FragTrap& fragTrap ) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	name = fragTrap.name;
	hit_points = fragTrap.hit_points;
	energy_points = fragTrap.energy_points;
	attack_damage = fragTrap.attack_damage;
	return ( *this );
}

void FragTrap::attack( const std::string& target  ) {
		if (energy_points > 0 && hit_points > 0) {
		std::cout << "FragTrap " << name << " attacks " << target \
		<< ", causing " << attack_damage \
		<< " points of damage!" << std::endl;
		energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Default destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "a positive high fives request" << std::endl;
}
