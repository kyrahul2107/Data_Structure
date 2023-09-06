#include<iostream>
#include<conio.h>
using namespace std;
bool linerSearch(int arr[],int i,int size ,int key)
{
    // base case
    if(i>size)
    {
        return false;
    }
    if(arr[i]==key)
    {
        return true;
    }
    // recursive call
    linerSearch(arr,i+1,size ,key);
    return false;
}
int main(void)
{
    int arr[] = {38, 27, 43, 3, 9, 2, 10, 4};
    int size= 8;
    int key;
    cout<<"enter the key to search the element"<<endl;
    cin>>key;
   if(linerSearch(arr,0,size,key))
   {
     cout<<"element is present in the list";
   }
   else{
   cout<<"element is not present in the list";
   }

    return 0;
}