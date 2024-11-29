#include<iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter value : " << endl;
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
    
    return 0;
}