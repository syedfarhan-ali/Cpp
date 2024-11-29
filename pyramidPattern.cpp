#include<iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter input" << endl;
    cin >> input;
    for (int i = 1; i <= input; i++) // this if for number of rows 
    {
        for (int j = 1; j <= (input - i); j++)// this is for printing space before star
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)// this is for printing star after space
        {
            cout << "*";
        }
       cout << endl; 
    }
    return 0;
}