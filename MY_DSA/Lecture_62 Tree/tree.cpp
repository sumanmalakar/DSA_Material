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

  cout << "Enter data for inserting in left " << data << endl;
  root->left = buildtree(root->left);
  cout << "Enter data for inserting in right " << data << endl;
  root->right = buildtree(root->right);
  return root;
}

// levelOrderTraversal me queue hota hai , always remember this...
void levelOrderTraversal(node *root){
   queue<node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
     node *temp = q.front();
     q.pop();

     if(temp == NULL){
       // purane level complete traverse ho chuka hai
       cout<<endl;
       if(!q.empty()){
         // queue still have some child nodes
         q.push(NULL);
       }
     }else{
       cout<<temp->data<<" ";
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

// levelOrder without seperater ..
   void levelOrder(node * root) {
        queue<node *>q;
        q.push(root);
        
        while(!q.empty()){
            node * temp = q.front();

            cout<<temp->data<<" ";
            q.pop();

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }

  //  void reverseLevelOrderTraversal(){}


// inorder Traversal
void inOrder(node *root){
  //base case
  if(root == NULL){
    return;
  }

inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);

}


// preOrder Traversal
void preOrder(node *root)
{
  //base case
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

// postOrder Traversal
void postOrder(node *root)
{
  //base case
  if (root == NULL)
  {
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}


void buildFromLevelOrder(node * &root){
  queue<node *>q;
  cout<<"Enter data for root "<<endl;
  int data;
  cin>>data;
  root = new node(data);
  q.push(root);


  while(!q.empty()){
    node *temp = q.front();
    q.pop();

    cout<<"Enter left node for: "<<temp->data<<endl;
    int leftData;
    cin>>leftData;

    if(leftData != -1){
      temp -> left = new node(leftData);
      q.push(temp->left);
    }

    cout<<"Enter right node for: "<<temp->data<<endl;
    int rightData;
    cin >> rightData;

    if(rightData != -1){
      temp -> right = new node(rightData);
      q.push(temp->right);
    }
  }
}

int main()
{

  node *root = NULL;

  // buildFromLevelOrder(root);
  levelOrderTraversal(root);
  cout<<endl;

  // levelOrder(root);
      // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
      // 1 2 9 -1 -1 5 -1 -1 6 -1 7 -1 -1
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

      /*
  // creating a Tree
  root = buildtree(root);

  //level order traversal
  cout<<"Priting the level order traversal "<<endl;
  levelOrderTraversal(root);
  cout<<endl;


  cout<<"InOrder Traversal : ";
  inOrder(root);
  cout<<endl;

  cout<<"PreOrder Traversal : ";
  preOrder(root);
  cout << endl;

  cout<<"PostOrder Traversal : ";
  postOrder(root);
  cout << endl;

  */

      return 0;
}