#include <iostream>
#include <string>

int main()
{
	
	//Check an array for number 5, and this should never happen

	int array [] = {6,7,8,6, 7, 2 , 3 , 1 , 5, 7, 4 , 3, 2, 1};

	try
	{
		for(int i = 0; i < 14; i++)
		{
			if(array[i] == 5)
			{
				throw i;
			}
		}
	}
	catch(int exception)
	{
		std::cout << "You messed up at index: " << exception << std::endl;
	}
}