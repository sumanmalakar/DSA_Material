#include<bits/stdc++.h>
using namespace std; 

class Node{
  public:
  int data;
  Node * next;

  Node(int d){
    this->data = d;
    this->next = NULL;
  } 
};
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

bool detectLoop(Node *head){
  if(head == NULL){
    return false;
  }

  map<Node*,bool> visited;

 Node* temp = head;

 while(temp != NULL){

   //cycle is present
   if(visited[temp] == true){
     //cycle hai isliye iske andar aaya
     return true;
   }

   visited[temp] = true;
   temp = temp -> next;

 }

 return false;

}

//optimise
Node *floyDetectLoop(Node *head){
  if(head == NULL){
    return false;
  }

  Node * slow = head;
  Node * fast = head;

  while(slow != NULL && fast != NULL){
    fast = fast->next;
    if(fast!=NULL){
      fast = fast->next;
    }

    slow = slow->next;

    if(slow == fast){
      return 1;
    }
  }
  return false;

}

 int main(){

  Node *head = new Node(10);

  print(head);

return 0;
}