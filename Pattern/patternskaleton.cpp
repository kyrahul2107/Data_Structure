#include<iostream>
using namespace std;
int main()
{
    int r,c,k;
   // char k='A';
    for(r=1;r<=4;r++)
    {   
    
        for(c=1;c<=7;c++)
        {
            if(c>=5-r&&c<=3+r)
            {
               cout<<k; 
              // k=0;
              c<4?k++:k--;
        
            }
            else
            {
                cout<<" ";
               // k=1;
            }
        }
    cout<<"\n";
    }
}
