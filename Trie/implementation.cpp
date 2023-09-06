#include<iostream>
using namespace std;
class TrieNode
{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    // constructor
     TrieNode(char data)
     {
        this->data=data;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;

        }
        isTerminal=false;

     }
};

class Trie
{
    public:
    TrieNode * root;
    Trie()
    {
      root=NULL;
    }
// to insert a word in the Trie
void insertUtil(TrieNode * root, string word)
{
    // base case
    if(word.length()==0)
    {
       root->isTerminal =true;
       return ;
    }
    // assumption that all the letter are in the small letter
    int index=word[0]-'a';
    TrieNode *child;
    // if the given word is not present 
    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    // if the given word is presnt 
  else
  {
    child=new TrieNode(word[0]);
    root->children[index]=child;
  }
  // recursive call for the rest of the character 
  insertUtil(child,word.substr(1));
}
 void insert(string word)
 {
    insertUtil(root, word);
 }

 // to search the word
 bool searchUtil(TrieNode * root, string word)
 {
    // base case
    if(word.length()==0)
    {
       return root->isTerminal;
    }
    // For the next character 
    int index=word[0]-'a';
    TrieNode *child;
    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else{
        
    }
 }
 bool search(string word)
 {
  searchUtil(root,word);
 }

};
int main()
{
    Trie t;
    t.insert("abc");
}