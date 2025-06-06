#include"Cure.hpp"
#include"Ice.hpp"
#include"MateriaSource.hpp"
#include"Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(3,*me);
	me->use(0, *bob);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);

	delete bob;
	delete me;
	delete src;
}
