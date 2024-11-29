#include<iostream>
using namespace std;
//To print the factorial of first n numbers
int main()
{
    int endValue,
    factorial = 1;
    cout << "Enter input" << endl;
    cin >> endValue;
    for (int iteration = 1; iteration <= endValue; iteration++)
    {
        factorial = factorial * iteration;
        cout << factorial << endl;
    }
    
    return 0;
}