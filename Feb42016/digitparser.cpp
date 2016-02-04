#include<iostream>


int main()
{
	std:: cout << "Enter UFID " << std::endl;

	int UFID;

	std::cin >> UFID; 


	const int UFIDSIZE = 8;

	int ufidArray [UFIDSIZE] = {0,0,0,0,0,0,0,0};

	//store in an array
	for(int i = 0; i < UFIDSIZE; i++)
	{
		int digit = UFID % 10;

		// std::cout << "Digit: " << digit << std::endl;

		UFID = UFID/10;

		// std::cout << "UFID: " << UFID << std::endl;


		ufidArray[i] = digit;
	}


	//first digit
	int firstDigit = ufidArray[UFIDSIZE-1];

	int count = 0;
	int sum = 0;

	for(int i = 0; i < UFIDSIZE-1; i++)
	{
		// std::cout << ufidArray[i];
		if(ufidArray[i] > firstDigit)
		{
			count = count + 1;
		}

		if(ufidArray[i] <= firstDigit)
		{
			sum += ufidArray[i];
		}
	}

	std::cout << "\nTotal digits greater then " << firstDigit << " is " << count << "\n" << std::endl;
	std::cout << "\nSum of digits less then or equal to " << firstDigit << " is " << sum << "\n" << std::endl;

}
