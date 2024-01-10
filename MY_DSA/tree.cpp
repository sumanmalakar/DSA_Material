#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  // node constructor
  node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

node *buildtree(node *root)
{

  cout << "Enter the data: " << endl;
  int data;
  cin >> data;

  root = new node(data);

  if (data == -1)
  {
    return NULL;
  }

  // cout << "Enter data for inserting in left " << data << endl;
  root->left = buildtree(root->left);
  // cout << "Enter data for inserting in right " << data << endl;
  root->right = buildtree(root->right);
  return root;
}

// levelOrderTraversal me queue hota hai , always remember this...
void levelOrderTraversal(node *root)
{
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    node *temp = q.front();
    q.pop();

    if (temp == NULL)
    {
      // purane level complete traverse ho chuka hai
      cout << endl;
      if (!q.empty())
      {
        // queue still have some child nodes
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
      //  if(temp ->left != NULL){
      if (temp->left)
      {
        q.push(temp->left);
      }

      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

void invertBinaryTree(node *root)
{ 
  if (root == nullptr)
  {
    return;
  }
  queue<node *> q;
  q.push(root);
  while (!q.empty())
  {
    node *curr = q.front();
    q.pop();
    swap(curr->left, curr->right);

    if (curr->left)
    {
      q.push(curr->left);
    }

    if (curr->right)
    {
      q.push(curr->right);
    }
  }
}

int main()
{

  node *root = NULL;

  // creating a Tree
  root = buildtree(root);

  // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
  // 1 2 9 -1 -1 5 -1 -1 6 -1 7 -1 -1
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

  // level_Order_Traversal
  cout<<endl<<"LevelOrderTraversal"<<endl;
  levelOrderTraversal(root);

  cout << endl;

  invertBinaryTree(root);

  // level_Order_Traversal
  cout<<"After Inverting"<<endl;
  levelOrderTraversal(root);
  cout << endl;

  return 0;
}

