#include<iostream>
#include<conio.h>
using namespace std;
int insertion_sort(int a[100], int size)
{
   int i,j,temp;
   for(i=1;i<size;i++)
   {
     temp=a[i];
     for(j=i-1;j>=0;j--)
     {
       if(a[j]>temp)
       {
        a[j+1]=a[j];
       }
       else
       {
        break;
       }
     }
     a[j+1]=temp;
   }
   cout<<"After sorting the elments in array"<<endl;
   for(i=0;i<size;i++)
   {
    cout<<a[i]<<" ";
   }
   return 0;
}
int main()
{
    int a[100],size,i;
    cout<<"enter the size of array::";
    cin>>size;
    cout<<"enter the elements::";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    //calling insertion function
     insertion_sort(a,size);
      return 0;

}