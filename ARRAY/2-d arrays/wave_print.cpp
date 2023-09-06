#include<iostream>
using namespace std;
void waveprint(int a[3][3],int row, int col)
{
    int col=0,row=0;
    if(col%2==0||col==0)
    {
        while ((row<3))
        {
            cout<<a[row][col]<<" ";
            row++;
        }
        
    }
    else{
        while(row>0)
        {
            cout<<a[row]<<" ";
            row--;
        }
    }
    col++;

}
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"before wave print array is"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
    }
}