#include <iostream>
#include <queue>

using namespace std;
queue<int> maxi;
queue<int> mini;
int solve(int *arr, int k, int size)
{
    // process the first windows
    int sum = 0;
    maxi.push(0);
    mini.push(0);
    for (int i = 0; i < k; i++)
    {
        if (arr[i] > arr[maxi.front()])
        {
            maxi.push(i);
            maxi.pop();
        }
        if (arr[i] < arr[mini.front()])
        {
            mini.push(i);
            mini.pop()
        }
    }
    sum += arr[maxi.front()] + arr[mini.front()];
    maxi.pop();
    mini.pop();
    // for processig of the next windows
    while (k < size)
    {
        for (int i = 1; i < k + 1 && k < size; i++)
        {
            maxi.push(i);
            mini.push(i);
            if (arr[i] > arr[maxi.front()])
            {
                maxi.push(i);
                maxi.pop();
            }
            if (arr[i] < arr[mini.front()])
            {
                mini.push(i);
                mini.pop();
            }
        }
        sum += arr[maxi.front()] + arr[mini.front()];
        maxi.pop();
        mini.pop();
        maxi.pop();
        mini.pop();
        k++;
    }
}
int main()
{
    int arr[]={2,5,-1,7,-3,-1,-2};
    int size=7;
    int k=4;
    cout<<"The sum is "<<" "<<solve(arr,k,size)<<endl;
}