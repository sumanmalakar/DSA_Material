#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  //constructor
  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }

  ~Node()
  {
    int value = this->data;
    //memory free
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "memory is free for node with data " << value << endl;
  }
};

void insertNode(Node *&tail, int element, int d)
{

  //empty list
  if (tail == NULL)
  {
    Node *newNode = new Node(d);
    tail = newNode;
    // tail->next = tail;
    newNode->next = newNode;
  }
  else
  {
    //non-empty list
    // assuming that the element is present in the list

    Node *curr = tail;

    while (curr->data != element)
    {
      curr = curr->next;
    }

    //element found -> curr is representing element wala node

    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}

// ise dyaan se dekh bro
void print(Node *&tail)
{
  Node *temp = tail;

//empty list;
  if(tail == NULL){
    cout<<"list is empty "<<endl;
    return;
  }

  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);

  cout << endl;
}

void deleteNode(Node *&tail, int value)
{
  // empty list
  if (tail == NULL)
  {
    cout << "List is empyt, please check again the list" << endl;
    return;
  }
  else
  {
    //non-empty

    //assuming that "value" is present in the linked list
    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != value)
    {
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;

   //1 Node Linked List
   if(curr == prev){
     tail = NULL;
   }
    
//>=2 Node linked list
  else  if(tail == curr ){
      tail = prev;
    }
    curr->next = NULL;
    delete curr;
  }
}

int main()
{

  Node *tail = NULL;

  //empty list me insert kar rhe hai
  insertNode(tail, 5, 3);
  print(tail);

  insertNode(tail, 3, 5);
  print(tail);

  insertNode(tail, 5, 7);
  print(tail);

  insertNode(tail, 7, 9);
  print(tail);

  insertNode(tail, 5, 6);
  print(tail);

  insertNode(tail, 9, 10);
  print(tail);

  insertNode(tail, 3, 4);
  print(tail);

  deleteNode(tail, 3);
  print(tail);

  return 0;
}