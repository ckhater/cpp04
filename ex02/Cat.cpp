#include"Cat.hpp"

Cat::Cat(void){
	std::cout<< "Cat constructor called"<< std::endl;
	this->type = "Cat";
	br = new(Brain);
}

Cat::~Cat(void){
	delete br;
	std::cout<< "Cat destructor called"<< std::endl;
}

Cat::Cat(const Cat &ct):Animal(ct){
	std::cout<< "Cat copy constructor called"<< std::endl;
	this->br = new Brain();
	*this = ct;
}

Cat &Cat::operator=(const Cat &ct){
	std::cout<< "Cat copy assignement called"<< std::endl;
	this->type = ct.type;
	//this->br = new Brain();
	return *this;
}

void Cat::makeSound(void)const{
	std::cout<< this->type<< " 🐱 meoooow"<< std::endl;
}

void	Cat::setBrain(std::string idea){
	br->setIdea(idea);
}

std::string Cat::getBrain(int i){
	return br->getIdea(i);
}
