#include<iostream>
using namespace std;

int main()
{
    int number,
    sum = 0;
    cout << "Enter number" << endl;
    cin >> number;
    while (number > 0 )//loop until the number reaches 0
    {
        sum += (number % 10);//this gives us the last digit of number and adds and stores it to sum variable.
        number /= 10;//we need to divide number in order to reduce the used digit.
    }
    cout << "Sum = " << sum << endl;

    return 0;
}