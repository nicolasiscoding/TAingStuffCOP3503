#include <iostream>
#include <stdexcept>

//A implementation of a templated stack by Nicolas Fry
template<typename T>
class stack{

  struct node
  {
    node* next;
    T data;

    node(const T& obj)
    {
      data = obj;
      next = 0;
    }
  };

  public:
    stack();
    ~stack();
    void print() const;
    void push(const T &dat);
    T pop();
    int getSize() const;

  private:
    node * top;
    int size;
};

template <typename T>
stack<T>::stack()
{
  //initializing by nulling out pointer
	size = 0;
  	top = 0;
}

template <typename T>
stack<T>::~stack()
{
  //Delete all the nodes in the stack
  while(getSize() != 0)
  {
    pop();
  }

}

template<typename T>
void stack<T>::push(const T& dat)
{
  //if the top has no memory address AKA nothing is there, create a node and increment size
  if(top == 0)
  {
    top = new node(dat);
    size+=1;
    return;
  }

  //create new node to add to the top
  node* toAdd = new node(dat);

  //point to the old top (to set it below)
  toAdd->next = top;

  //make toAdd the new top
  top = toAdd;

  //increment size variable
  size+=1;
}

template<typename T>
T stack<T>::pop()
{

  if(getSize() == 0)
  {
    throw std::logic_error("Stack is empty, can not pop!");
  }

  //save the data in a variable
  T dat = top->data;

  //make a temporary pointer to point to the CURRENT top because we will end up deleting it
  node* toDelete = top;

  //Set the NEW top to the node right below it on the stack
  top = top->next;

  //delete the temporary pointer
  delete toDelete;

  //decrement size
  size-=1;

  //return the popped value
  return dat;
}

template<typename T>
int stack<T>::getSize() const
{
  return size;
}

template <typename T>
void stack<T>::print() const
{
  std::cout << "Printing stack:\n" << std::endl;

  node * conductor = top;
  while(conductor != 0)
  {
    std::cout << conductor->data << std::endl;
    conductor = conductor->next;
  }

  std::cout << std::endl;

}
