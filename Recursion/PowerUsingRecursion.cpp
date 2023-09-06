#include <iostream>
using namespace std;
int powerCalculte(int number, int power)
{
    // base case
    if (power == 0)
    {
        return 1;
    }
    if (power == 1)
    {
        return number;
    }
    // recursive call
    int ans = powerCalculte(number, power / 2);
    if (power % 2 == 0)
    {
        return ans * ans;
    }
    return number * ans * ans;
}
int main()
{
    int number, power;
    cout << "enter the number to calculate  the power" << endl;
    cin >> number;
    cout << "enter the power to calculte the power" << endl;
    cin >> power;
    cout << powerCalculte(number, power) << endl;
    return 0;
}