#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &anml);
		Animal &operator=(const Animal &anml);
		virtual void makeSound(void)const;
		std::string getType(void)const;
};


#endif
