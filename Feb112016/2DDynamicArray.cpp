#include <iostream>


int main()
{

	std::cout << "Hey, what size would you like your 2D array to be?" << std::endl;

	int size;

	std::cin >> size;

	//DYNAMICALLY DECLARED
	//ARRAY OF POINTERS -> ARRAY OF INTS
	int ** array = new int*[size];

	for(int i = 0; i < size; i++)
	{
		array[i] = new int[size];
	}


	//clearing newly made 2D array
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			array[i][j] = 7;
		}
	}

	//printing the values in the array
	for(int x = 0; x < size; x++)
	{
		for(int d = 0; d < size; d++)
		{
			std:: cout << array[x][d] << "\t";
		}

		std::cout << "\n";
	}


	//Time to say Bye bye!~

	for(int i = 0; i < size; i++)
	{
		delete[] array[i];
	}

	delete[] array;

}