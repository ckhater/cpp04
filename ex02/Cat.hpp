#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat:public Animal{
	private:
		Brain *br;
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat(const Cat &ct);
		Cat &operator=(const Cat &ct);
		void makeSound()const;
		std::string	getBrain(int i);
		void	setBrain(std::string idea);

};

#endif
