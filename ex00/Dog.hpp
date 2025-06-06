#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog: public Animal{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &dg);
		Dog &operator=(const Dog &dg);
		void	makeSound(void)const;
};

#endif
