#include<iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter input : " << endl;
    cin >> input;
    for (int i = 1; i <= input; i++)//for going through rows 
    {
        for (int j = i; j <= input; j++)//for printing rows
        {
            cout << j;
        }
        for (int k = 1; k <= (i - 1); k++)//for printing after iteration has reached input
        {
            cout << k;
        }
        cout << endl;
    }
    
    return 0;
}