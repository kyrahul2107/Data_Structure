#include <iostream>
#include <queue>

using namespace std;
class Node
{
public:
  int data;
  Node *left;
  Node *right;

  // constructor creation
  Node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};
Node *buildTree(Node *&root)
{
  int data;
  cout << "Enter the data" << endl;
  cin >> data;
  root = new Node(data);
  // recursion base codition
  if (data == -1)
  {
    return NULL;
  }
  // recursion call for left part of the root node
  cout << "Enter the data to the left of" << data << " " << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data to the  right of" << data << " " << endl;
  root->right = buildTree(root->right);
  return root;
}

// level wise teraversal
void levelWiseTraversal(Node *&root)
{
  // cretion of queue
  queue<Node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();
    if (temp == NULL)
    {
      // we are in the next level
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
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
// Preorder Traversal
void preorder(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
// post oreder traversal
void postOrder(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}
// Inorder traversal

void inOrder(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }

  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}
// level order traversal without recursion
void levelOrederTraversal(Node *&root)
{
  int data;
  cout << "enter the data for the root node" << endl;
  cin >> data;
  root=new Node(data);
  Node *temp;
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    temp = q.front();
    q.pop();
    cout << "Enter the left data item of the " << temp->data << endl;
    int leftData;
    cin >> leftData;
    if (leftData != -1)
    {
      temp->left = new Node(leftData);
      q.push(temp->left);
    }
    cout << "Enter the right data item of the " << temp->data << endl;
    int rightData;
    cin >> rightData;
    if (rightData != -1)
    {
      temp->right = new Node(rightData);
      q.push(temp->right);
    }
  }
}
  int main()

  {
    Node *root;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = NULL;
    buildTree(root);
    levelWiseTraversal(root);
    /*cout << "Inorder traversal is"
         << " " << endl;
    inOrder(root);
    cout << "preorder traversal is"
         << " " << endl;
    preorder(root);
    cout << "Postorder traversal is"
         << " " << endl;
    postOrder(root);
    levelOrederTraversal(root);
    inOrder(root);*/
    return 0;
  }