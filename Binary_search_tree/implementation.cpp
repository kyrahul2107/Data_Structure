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
  Node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};
Node *maxVal(Node *root)
{
  Node *temp = root;
  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  return temp;
}
Node *minVal(Node *root)
{
  Node *temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return temp;
}
Node *deleteNode(Node * root, int v)
{
  // base case
  if (root == NULL)
    return root;
  if (root->data == v)
  {
    // case1:
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }
    // case2:
    if (root->left == NULL && root->right != NULL)
    {
      Node *temp = root->right;
      delete root;
      return temp;
    }
    // case 3:
    if (root->left != NULL && root->right == NULL)
    {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    // case 4:
    if (root->left != NULL && root->right != NULL)
    {
      int mini = minVal(root->right)->data;
      root->data = mini;
      root->right = deleteNode(root->right, mini);
      return root;
    }
  }
  else if (v < root->data)
  {
   root->left=  deleteNode(root->left, v);
  }
  else
  {
   root->right= deleteNode(root->right, v);
  }
}

Node *creatBST(Node *root, int d)
{
  // base case
  if (root == NULL)
  {
    root = new Node(d);
    return root;
  }
  // left part me data dalo
  if (d < root->data)
  {
    root->left = creatBST(root->left, d);
  }
  else
  {
    root->right = creatBST(root->right, d);
  }
  return root;
}
Node *insertData(Node *&root)
{
  int d;
  cin >> d;
  while (d != -1)
  {
    root = creatBST(root, d);
    cin >> d;
  }
  return root;
}
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
int main()
{
  Node *root = NULL;
  Node *temp = insertData(root);
  levelWiseTraversal(temp);
  Node *max = maxVal(root);
  Node *min = minVal(root);
  cout << "The maximum value of the Tree is"
       << " " << max->data << endl;
  cout << "The minimum value of the Tree is"
       << " " << min->data << endl;
       // root will be updated hence 
       Node * deletedRoot=deleteNode(root,40);
       levelWiseTraversal(deletedRoot);

  return 0;
}