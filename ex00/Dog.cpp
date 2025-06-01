#include"Dog.cpp"

Dog::Dog(void){
	std::cout<< "Dog constructor called"<< std::endl;
	this->type = "Dog";
}

Dog::~Dog(void){
	std::cout<< "Dog destructor called"<< std::endl;
}

Dog::Dog(const Dog &dg){
	std::cout<< "Dog copy constructor called"<< std::endl;
	*this = dg;
}

Dog	&Dog::operator=(const Dog &dg){
	std::cout<< "Dog copy assignement operator called"<< std::endl;
	this->type = db.type;
	return *this;
}

void	Dog::makeSound(void){
	std::cout<< this->type<< " sound woof woof"<< std::endl;
}
