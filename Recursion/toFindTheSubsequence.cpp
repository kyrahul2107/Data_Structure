#include <iostream>
#include <vector>
#include<string.h>
using namespace std;

// print the elements

void print(vector<char> print)
{
    for (int i = 0; i < print.size(); i++)
    {
        cout << print[i] << " ";
    }
}
void powerSet(vector<char> arr, vector<char> output, int i, int size)
{
    // base case
    if (i > size)
    {
        print(output);
        return;
    }
    // exclude karo
    powerSet(arr, output, i + 1, size);
    // include karo
    int element = arr[i];
    output.push_back(element);
    powerSet(arr, output, i + 1, size);
}
int main()
{
    vector<char> arr = {1, 2, 3};
    vector<char> output;
    int size = 3;
    powerSet(arr, output, 0, size);
}