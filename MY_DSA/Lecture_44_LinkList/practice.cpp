#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};


void insertAtHead(Node* &head, int d){
   
   // creating new node
   Node *temp = new Node(d);
   temp->next = head;
   head = temp;
  
}

void insertAtTail(Node* &tail, int d){
  
  //creating new Node
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){

  //insert at position
  if(position == 1){
    insertAtHead(head, d);
    return;
  }

  //creating temp for position
  Node *temp = head;
  int count = 1;

  while(count<position-1){
    temp = temp->next;
    count++;
  }

  // insertAtLast
  if(temp->next==NULL){
    insertAtTail(tail, d);
    return;
  }

  // inserting the data, creating new Node
  Node *currentNode = new Node(d);
  currentNode->next = temp->next;
  temp->next = currentNode;
}

void print(Node* &head){
  Node *temp = head;

  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}



int main()
{

  Node *node1 = new Node(10);
  // cout << node1->data << endl;
  // cout << node1->next << endl;

  Node *head = node1;
  Node *tail = node1;


  cout<<head->data<<endl;
  cout<<head->next<<endl;

insertAtHead(head, 12);


insertAtTail(tail, 20);
insertAtTail(tail, 40);

insertAtPosition(tail,head, 1, 50);

print(head);
cout << tail->next << endl;

return 0;
}