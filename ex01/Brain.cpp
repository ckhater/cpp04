#include"Brain.hpp"

Brain::Brain(void){
	std::cout<< "🧠 Brain constructor called"<< std::endl;
	j = 0;
}

Brain::~Brain(void){
	std::cout<< "🧠 Brain destructor called"<< std::endl;
}

Brain::Brain(Brain const &br){
	std::cout<< "🧠 Brain copy constructor called"<< std::endl;
	*this = br;
}

Brain &Brain::operator=(Brain const &br){
	std::cout<< "🧠Brain copy assignement called"<< std::endl;
	this->j = br.j;
	int i =0;
	while(i <= this->j)
	{
		this->ideas[i] = br.ideas[i];
		i++;
	}
	return *this;
}

std::string Brain::getIdea(int i)
{
	if(i > this->j || i < 0)
	{
		std::cout<< "⁉️ this idea doesn't exist";
		return "";
	}
	return this->ideas[i];
}

void Brain::setIdea(std::string idea){
	if(this->j < 100)
	{
		this->ideas[this->j] = idea;
		this->j++;
	}
	else
		std::cout << "Brain is full !! 🤯"<< std::endl;
}


