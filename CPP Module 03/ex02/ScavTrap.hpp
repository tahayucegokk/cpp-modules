#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& );
		ScavTrap& operator=( const ScavTrap& );
		~ScavTrap();

		void attack( const std::string& target );
		void guardGate( void );
};


#endif
