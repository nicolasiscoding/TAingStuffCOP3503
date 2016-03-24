#include "stack.cpp"
#include <string>

int main()
{
  stack<std::string> * videoGames = new stack<std::string>();


  videoGames->push("Fallout 4");
  videoGames->push("Halo Reach");
  videoGames->push("MGS V");
  videoGames->push("CounterStrike Source");
  std::cout << "New Size is " << videoGames->getSize() << std::endl;
  videoGames->print();

  std::cout << "\nPopping: " << videoGames->pop() << "\n"<< std::endl;
  videoGames->print();
  std::cout << "New Size is " << videoGames->getSize() << std::endl;

  std::cout << "\nPopping: " << videoGames->pop() << "\n" << std::endl;
  videoGames->print();
  std::cout << "New Size is " << videoGames->getSize() << std::endl;

  std::cout << "\nPopping: " << videoGames->pop() << "\n" << std::endl;
  videoGames->print();
  std::cout << "New Size is " << videoGames->getSize() << std::endl;

  std::cout << "\nPopping: " << videoGames->pop() << "\n" << std::endl;
  videoGames->print();
  std::cout << "New Size is " << videoGames->getSize() << std::endl;

  //size is zero
  try
  {
    std::cout << "\nPopping: " << videoGames->pop() << "\n" << std::endl;
    videoGames->print();
    std::cout << "New Size is " << videoGames->getSize() << std::endl;
  }
  catch(std::logic_error &e)
  {
    std::cerr << e.what() << std::endl;

    //do something
    std::cout << "This object will self destruct in.. " << std::endl;
  }

  delete videoGames;
}
