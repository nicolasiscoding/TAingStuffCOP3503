#include <iostream>
#include "cat.h"


int main()
{
	cat *fluffy = new cat();

	fluffy->setName("Fluffilufigus");


	std::cout << fluffy->getName() << std::endl;

	delete fluffy;
	return 0;
}