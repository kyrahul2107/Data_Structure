#include<iostream>
#include<conio.h>
using namespace std;
int merg(int a[5],int m,int b[3],int n,int c[8])
{
    int i=0,j=0,k=0;
    while(i<m&&j<n)
    {
      if(a[i]<b[j])
      {
        c[k]=a[i];
        i++;
        k++;
      }
      else
      {
        c[k]=b[j];
        j++;
        k++;

      }
    }

// copy remaining elements in c of a
   while(i<m)
   {
    c[k]=a[i];
    i++;
    k++;
   }
// copy{ remaining elements of b in c
  while(j<n)
  {
   c[k]=b[j];
   k++;
   j++;
  }
  return 0;
}
void print(int c[8],int p)
{
  for(int k=0;k<p;k++)
  {
    cout<<c[k]<<" ";
  }
}

int main()
{
    int a[5]={1, 2,3};
    int b[3]={2,5,6};
    int c[8];
    merg(a,3,b,3,c);
    print(c,6);
    return 0;
}
