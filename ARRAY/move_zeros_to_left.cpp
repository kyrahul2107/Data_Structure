#include<iostream>
#include<vector>
using namespace std;
int move_zero(int a[5],int n)
{

        int i=0,j=0;
        while(j<n)
        {
            if(a[j]!=0)
            {
                swap(a[i],a[j]);
                i++;
            }
            j++;
        }
        return 0;
}

void print(int a[5],int p)
{
  for(int k=0;k<p;k++)
  {
    cout<<a[k]<<" ";
  }
}
int main()
{
    int a[5]={ 0,1,0,3,12};
    move_zero(a,5);
    print(a,5);
    return 0;
}