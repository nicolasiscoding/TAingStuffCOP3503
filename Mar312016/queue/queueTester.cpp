#include "queue.cpp"
#include <string>

int main()
{
  //so you decide to go to StarBucks to get a coffee..
  queue<std::string> * starbucksLine = new queue<std::string>();

  starbucksLine->enqueue("Nicolas");
  starbucksLine->enqueue("Tom");
  starbucksLine->enqueue("Robert");
  starbucksLine->enqueue("Jamal");
  starbucksLine->enqueue("Michael");

  std::cout << "You peer through the window and see the following people in line" << std::endl;
  starbucksLine->print();

  std::cout << "You think to yourself there are " << starbucksLine->getSize() << " people in line.. better wait a bit \n" << std::endl;

  //People start placing orders..
  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  //but wait..! Someone else got in line!
  std::cout << "Jimmy got in line\n" << std::endl;
  starbucksLine->enqueue("Jimmy");

  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  //size is zero
  try
  {
    std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
    starbucksLine->print();
    std::cout << std::endl;
  }
  catch(std::logic_error &e)
  {
    std::cerr << e.what() << std::endl;

    //do something
    std::cout << "It appears nobody is in line anymore.. You decide to join the line" << std::endl;
  }

  starbucksLine->enqueue("You");
  starbucksLine->print();
  std::cout << std::endl;

  std::cout << starbucksLine->dequeue() << " placed an order" << std::endl;
  starbucksLine->print();
  std::cout << std::endl;

  //Fin   *Bravo* *Bravo*
  delete starbucksLine;
}
