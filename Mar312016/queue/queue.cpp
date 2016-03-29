#include <iostream>
#include <stdexcept>

template<typename T>
class queue{

  struct node
  {
    node* next;

    //for the purpose of printing the queue
    node * behind;
    T data;

    node(const T& obj)
    {
      data = obj;
      next = 0;
      behind = 0;
    }
  };

  public:
    queue();
    ~queue();
    void enqueue(const T & dat);
    T dequeue();
    void print() const;
    int getSize() const;

  private:
      node * front;
      node * back;
      int size;
};

template<typename T>
queue<T>::queue()
{
  size = 0;
  front = 0;
  back = 0;
}


template<typename T>
queue<T>::~queue()
{
  while(getSize() != 0)
  {
    dequeue();
  }
}

//enqueue takes in data and puts it in the queue
template<typename T>
void queue<T>::enqueue(const T & dat)
{
  //if the queue is empty, (basecase for empty queue)
  if(front == 0 || back == 0)
  {
    front = new node(dat);
    back = front;
    size+=1;
    return;
  }

  //if the queue has one element, (basecase for size 1  queue)
  if(getSize() == 1)
  {
    back = new node(dat);
    back->next = front;
    front->behind = back;
    size+=1;
    return;
  }

  //general case
  //create temporary pointer to hold the old back's data (so we do not lose the node and have a mem leak)
  node * oldBack = back;

  //create the next node to enqueue
  back = new node(dat);
  back->next = oldBack;
  oldBack->behind = back;
  size+=1;
}

//dequeue takes the fist element, and removes it from the queue
template<typename T>
T queue<T>::dequeue()
{
  //make temporary pointer for item I am going to delete
  node * toDelete;

  //size zero basecase
  if(getSize() == 0)
  {
    throw std::logic_error("Queue is empty, can not dequeue!");
  }

  //size 1 basecase
  if(getSize() == 1)
  {
      //preserve data and null out front and back pointers
      toDelete = front;
      T data = front->data;
      front = 0;
      back = 0;

      delete toDelete;
      size-=1;
      return data;
  }

  //size 2 basecase
  if(getSize() == 2)
  {
    //preserve data
    toDelete = front;
    T data = front->data;
    front = back;

    //delete old front, decrement size
    delete toDelete;
    size-=1;
    return data;
  }

  //GeneralCase
  //preserving data and correcting the front pointer
  toDelete = front;
  T data = front->data;
  front = front->behind;

  delete toDelete;
  size-=1;
  return data;
}

//print prints the data in the queue
template<typename T>
void queue<T>::print() const
{
  node * conductor = front;

  while(conductor != 0)
  {
    std::cout << conductor->data << ",  ";
    conductor = conductor->behind;
  }

  std::cout<<"\n" << std::endl;
}

template<typename T>
int queue<T>::getSize() const
{
  return size;
}
