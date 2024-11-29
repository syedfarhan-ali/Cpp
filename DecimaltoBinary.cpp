#include<iostream>
using namespace std;

int main()
{
    //decimal to binary conversion
    int input,power = 1 ,sum = 0 ;
    cout << "Enter your input" << endl;
    cin >> input;
    while (input > 0)
    {
        int parityDigit = input % 2;
        sum = sum + (parityDigit * power);
        input = input / 2;
        power = power * 10;
    }
    cout << sum << endl;
    return 0;
}