#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat:public Animal{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &ct);
		Cat &operator=(const Cat &ct);
		void makeSound()const;
};

#endif
