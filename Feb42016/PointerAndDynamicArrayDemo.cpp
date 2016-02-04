#include <iostream>

int main()
{
  int i = 5;
  std::cout << "int i = " << i << std::endl;

  //& means "address of"
  std::cout << "Address of int i: " << &i << std::endl;

  //A pointer is basically a variable that stores an address
  //to the object/primitive defined

  //Think of it as a street address. A street address directs you to a plot of land,
  //Not necessarily to a house, office building, business, etc

  //declare a variable "pointerToInt" that is a Pointer to an int
  int * pointerToInt;

  pointerToInt = &i;

  //Lets see what this prints!
  std::cout << "When I print pointerToInt, I see: " << pointerToInt << std::endl;

  //Think of the dereference operator '*' as actually seeing
  //what is on the plot of land.


  //Now if I dereference it, what do you think it will print?

  std::cout << "When I dereference pointerToInt I see: " << *pointerToInt << std::endl;


  //Part 2

  //Lets say I want to declare a dynamic array at runtime......

  int size;

  std::cout << "What is the size of your array?" << std::endl;
  std::cin >> size;

  //Declares size dynamically during runtime
  int * array = new int[size];

  //NOTICE HOW I CALL THE 'new' statement! (it's allocating space in memory)

  //Lets fill this array

  for(int i = 0; i < size; i++)
  {
    std::cout << "What would you like in position " << i << "?" << std::endl;

    int input;
    std::cin >> input;

    array[i] = input;
  }

  //Now that we filled the array, lets print it out

  for(int i = 0; i < size; i++)
  {
    std::cout << array[i] << "\t";
  }

  //Now that we are done with that DYNAMIC array,
  //we should Reallocate space to the OS

  //For every 'new', call a 'delete' when you are done

  delete array[];

  //if this was a single dynamic object, you would call 'delete'. Not 'delete[]'

  //There you go! We reclaimed space to the OS!


  //How do you think we could declare a 2D dynamic array??

  //That is the golden question...
  return 0;
}
