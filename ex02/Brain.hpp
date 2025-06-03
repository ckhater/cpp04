#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain{
		  private:
			  std::string ideas[100];
			  int j;
		  public:
			  Brain(void);
			  ~Brain(void);
			  Brain(Brain const &br);
			  Brain &operator=(Brain const &br);
			  std::string getIdea(int i);
			  void setIdea(std::string idea);

};

#endif
