#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
  int data;
  Node *next;

  //constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  //destructor (for deleting any node)
  ~Node()
  {
    int value = this->data;

    //memory free(deleting)
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }

    cout << "memory is free for node with data " << value << endl;
  }
};

void insertAtHead(Node *&head, int d)
{

  // new node create
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d)
{

  // new node create
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
  // insert at starting
  if (position == 1)
  {
    insertAtHead(head, d);
    return; // ye likhne se nikhe kuchh v nhi chalega
  }

  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }

  //inserting at Last Position
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return; // ye likhne se nikhe kuchh v nhi chalega
  }

  // creating a node for d
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{

  //deleting head Node (first_Node)
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;

    // memory free start node(head node)
    temp->next = NULL;
    delete temp;
  }
  else
  {
    //deleting any middle node or last node
    Node *current = head;
    Node *prev = NULL;

    int cnt = 1;

    while (cnt < position)
    {
      prev = current;
      current = current->next;
      cnt++;
    }

    prev->next = current->next;

    // memory free
    current->next = NULL;
    delete current;
  }
}

bool detectLoop(Node *head)
{
  if (head == NULL)
  {
    return false;
  }

  map<Node *, bool> visited;

  Node *temp = head;

  while (temp != NULL)
  {

    //cycle is present
    if (visited[temp] == true)
    {
      //cycle hai isliye iske andar aaya
      cout<<"Present on element "<<temp->data<<endl;
      return true;
    }

    visited[temp] = true;
    temp = temp->next;
  }

  return false;
}

//optimise 
Node *floyDetectLoop(Node *head)
{
  if (head == NULL)
  {
    return head;
  }

  Node *slow = head;
  Node *fast = head;

  while (slow != NULL && fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      fast = fast->next;
    }

    slow = slow->next;

    if (slow == fast)
    { 
      cout<<"present at = "<<slow ->data<<endl;
      return slow;
    }
  }
  return NULL;
}

int main()
{
  // created a new node
  Node *node1 = new Node(10);
  // cout << node1->data << endl;
  // cout << node1->next << endl;

  // head pointed to node1
  Node *head = node1;
  Node *tail = node1;

  // print(head);

  // insertAtHead(head, 12);
  insertAtTail(tail, 12);

  // print(head);

  // insertAtHead(head, 15);
  insertAtTail(tail, 15);

  // print(head);

  insertAtPosition(tail, head, 4, 22);

  print(head); 

  tail -> next = head -> next;

  // cout << "head = " << head->data << endl;
  // cout << "tail = " << tail->data << endl;
  // // print(head);

  if (floyDetectLoop(head) != NULL)
  {
    cout<<"Cycle is present "<<endl;
  }
  else
  {
    cout<<"No cycle "<<endl;
  }

  // deleteNode(1, head);


  // cout << "head = " << head->data << endl;
  // cout << "tail = " << tail->data << endl;

  return 0;
}