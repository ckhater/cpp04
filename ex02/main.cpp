#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main (){
	//const Animal *i = new Dog();
	//const Animal *j = new Cat();

	Dog basic;
	Dog tmp (basic);

	Cat see;
	see.setBrain("waaaa");
	Cat se;
	se = see;
	std::cout<< see.getBrain(0)<<std::endl<<se.getBrain(0)<<std::endl;
	//delete i;
	//delete j;
}
