#include<iostream>
using namespace std;
//raise a to the power of b
int main()
{
    int number, power,
        result = 1;
        cout << "Enter the number " << endl;
        cin >> number;
        cout << "Enter the power " << endl;
        cin >> power;
    for (int iteration = 1; iteration <= power; iteration++)
    {
        result *= number;
    }
    cout << result << endl;
    return 0;
}