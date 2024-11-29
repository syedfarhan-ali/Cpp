#include<iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter Input : " << endl;
    cin >> input ;
    for (int i = 1; i <= input; i++)//for printing number of rows 
    {
        for (int j = 1; j <= input; j++)// for printing the values in rows 
        {
            cout << j;
        }
        
        cout << endl;//for creating new rows
    }
    
    return 0;
}