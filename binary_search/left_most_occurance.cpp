#include<iostream>
using namespace std;
int first(int a[10],int size,int key)
{
 int s=0,e=size-1,ans=-1;
 int mid=(s+e)/2;
 while (s<=e)
 {
    if(a[mid]==key)
    {
        ans=mid;
        e=mid-1;
    }
  else if(key>a[mid])
 {
    s=mid+1;
 }
  else{
    e=mid-1;
  }
  mid=s+(e-s)/2;
 }
 return ans;
}
int last(int a[10],int size,int key)
{
 int s=0,e=size-1,ans=-1;
 int mid=(s+e)/2;
 while (s<=e)
 {
    if(a[mid]==key)
    {
        ans=mid;
        s=mid+1;
    }
  else if(key>a[mid])
 {
    s=mid+1;
 }
  else{
    e=mid-1;
  }
  mid=s+(e-s)/2;
 }
 return ans;
}


int main()
{
    int a[10]={ 1,2,3,3,3,5};
     int key=3;
     cout<<"left most index of "<<key<<"is:"<<first(a,6,key)<<endl;
     cout<<"left most index of "<<key<<"is:"<<last(a,6,key);

}