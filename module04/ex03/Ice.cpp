#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}
Ice::Ice(const Ice & other): AMateria(other.getType()) {*this = other;}
Ice& Ice::operator=(const Ice & other) {
	_type = other._type;
	return *this;
}
Ice::~Ice() {}


AMateria*	Ice::clone() const {
	AMateria*	ice = new Ice(*this);
	return ice;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << 
	target.getName() << " *" << std::endl;
}