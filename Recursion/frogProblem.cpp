#include<iostream>
using namespace std;
int frogProblemUsingRecursion(int lengthOfWell, int climb,int back,int time)
{
    // base case
    if(climb==lengthOfWell)
    {
        return time;
    }
    climb=climb+3;
    climb=climb-back;
    time++;
    frogProblemUsingRecursion(30,climb,1,time);
    return time;
}
int main()
{
    int time=frogProblemUsingRecursion(30,0,2,0);
    cout<<"Time taken by the frog is"<<" "<<time;
    return 0;
}