#include<iostream>
using namespace std;

int main()
{
    int number,
    reverse = 0;
    cout << "Enter your number to be reversed" << endl;
    cin >> number;
    while (number > 0)
    {
        reverse = (reverse * 10) + (number % 10);//reverse * 10 + number % 10 is very IMPORTANT - Here we are reversing the division with 10 and also adding the last digit of our number in the reverse variable
        number /= 10; 
    }
    cout << reverse << endl;
    
    return 0;
}