#include<iostream>
using namespace std;

int main()
{
    //binary to decimal converter
    int input,
    sum = 0,
    power = 1;
    cout << "Enter your input" << endl;
    cin >> input;
    while (input > 0)
    {
        int lastDigit = input % 10;
        sum += lastDigit * power;
        power*=2;
        input/=10;
    }
    
    cout << sum << endl;
    return 0;
}