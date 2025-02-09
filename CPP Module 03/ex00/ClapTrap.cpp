
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	name = "ClapTrap";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap( const std::string& name ) {
	std::cout << "Custom constructor called" << std::endl;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;			
	this->name = name;	
}

ClapTrap::ClapTrap( const ClapTrap& clapTrap ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& clapTrap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	name = clapTrap.name;
	hit_points = clapTrap.hit_points;
	energy_points = clapTrap.energy_points;
	attack_damage = clapTrap.attack_damage;
	return ( *this );
}

ClapTrap::~ClapTrap () {
	std::cout << "Default Deconstructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target \
		<< ", causing " << attack_damage\
		<< " points of damage!" << std::endl;
		energy_points -= 1;
	} else {
		std::cout << "No more energy or hit points!" << std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (hit_points > 0) {
		std::cout << "ClapTrap " << name << " takes " << amount \
		<< " points of damage!" << std::endl;
		hit_points -= amount;
	} else {
		std::cout << "No more hit points!" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap " << name << " does repaired " << amount \
		<< " points!" << std::endl;
		hit_points += amount;
		energy_points -= 1;
	} else {
		std::cout << "No more energy or hit points!" << std::endl;
	}
}
