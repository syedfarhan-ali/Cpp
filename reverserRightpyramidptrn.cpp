#include<iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter input" << endl;
    cin >> input;
    for (int i = input; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}