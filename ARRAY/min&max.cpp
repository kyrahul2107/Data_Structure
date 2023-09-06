#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
    {
        max=a[i];
    }
  }
  return max;
}



int min(int a[], int n)
{
  int min=INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(a[i]<min)
    {
        min=a[i];
    }
  }
  return min;
}
int main()
{
 int a[10],n;
 cout<<"enter the size of array";
 cin>>n;
 cout<<"enter the element of array";
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
     max(a,n);
     min(a,n);
     return 0;
}