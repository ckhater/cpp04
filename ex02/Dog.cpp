#include"Dog.hpp"

Dog::Dog(void){
	std::cout<< "Dog constructor called"<< std::endl;
	this->type = "Dog";
	br = new(Brain);
}

Dog::~Dog(void){
	delete br;
	std::cout<< "Dog destructor called"<< std::endl;
}

Dog::Dog(const Dog &dg):Animal(dg){
	std::cout<< "Dog copy constructor called"<< std::endl;
	*this = dg;
}

Dog	&Dog::operator=(const Dog &dg){
	std::cout<< "Dog copy assignement operator called"<< std::endl;
	this->type = dg.type;
	this->br = new Brain();
	return *this;
}

void	Dog::makeSound(void)const{
	std::cout<< this->type<< " 🐶 woof woof"<< std::endl;
}

void	Dog::setBrain(std::string idea){
	br->setIdea(idea);
}

std::string Dog::getBrain(int i){
	return br->getIdea(i);
}
