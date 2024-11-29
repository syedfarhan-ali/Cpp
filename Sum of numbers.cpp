#include<iostream>
using namespace std;

int main()
{
    int numbers = 0 , sum = 0 ,holder;
    cout << "Enter the amount of numbers : ";
    cin >> numbers ;
    holder = numbers;
    while (numbers != 0)
    {
        sum = sum + numbers;
        numbers--;
    }
    cout << "The sum of first " << holder << " natural numbers is : " << sum << endl;
    return 0;
}