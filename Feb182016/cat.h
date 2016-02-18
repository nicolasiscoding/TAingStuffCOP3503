//HOW TO .H ON A DIME

#include <iostream>
#include <string>

class cat
{

	public:
		cat();

		void setColor(std::string color);
		std::string getColor();

		void setName(std::string name);
		std::string getName();

		void setGender(std::string gender);
		std::string getGender();

		void setAge(int age);
		int getAge();


	private:
		std::string color;
		std::string name;
		std::string gender;
		int age;
};

	cat::cat()
	{
		std::cout << "Im alive!!!!!!" << std::endl;

	}


	void cat::setColor(std::string color)
	{
		this->color = color;
	}

	std::string cat::getColor()
	{
		return color;
	}

	void cat::setName(std::string name)
	{
		this->name = name;
	}

		std::string cat::getName()
	{
		return name;
	}

	void cat::setGender(std::string gender)
	{
		this->gender = gender;
	}

	std::string cat::getGender()
	{
		return gender;
	}

	void cat::setAge(int age)
	{
		this->age = age;
	}

	int cat::getAge()
	{
		return age;
	}
