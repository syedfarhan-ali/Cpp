#include<iostream>
using namespace std;
//NOTE -This has a 10 digit limitation as we are using int as our variable type
int main()
{
    int number,
    digits = 0;
    cout << "Enter your number" << endl;
    cin >> number;
    while (number > 0)//loop ends when the number reaches 0
    {
        number = number/10;//dividing by 10 to knock off 1 digit at a time
        digits++;//increasing the count of digits to print after loop ends
    }
    cout << "There are \"" << digits << "\" digits in your number" << endl;
    return 0;
}