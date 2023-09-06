#include<iostream>
using namespace std;
bool linear(int a[],int n,int key){
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }


    }
    
      return 0;  
}
  int main()
{
  int a[10],n ,key;
  cout<<"enter the size of array";
  cin>>n;
  cout<<"enter the key element";
  cin>>key;
  cout<<"enter the elemnet of array";
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  if(linear(a,n,key))
  {
    cout<<"key element exixt";
  }
  else
  {
    cout<<"key element does not exist";
  }
  
}  