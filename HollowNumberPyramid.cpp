#include<iostream>
using namespace std;

int main()
{
    cout << "Enter a number" << endl;
    int size = 0;
    cin >> size;
    for (int row = 1; row <= size; row++)
    {
       for (int j = 1; j <= (size-row); j++) //loop to print spaces in front
       {
        cout << " " ;
       }
       for (int k = 1; k <= (2*row-1); k++)//loop to print numbers and blank spaces inside
       {
        if (k == 1 || row == size || k == (2*row-1))//conditions to print or to not print || 2*row-1 is very IMPORTANT!! ||
        {
            cout << row;
        }
        else
        {
            cout << " ";
        }
       }
       
       cout  << endl;//to seperate into different lines
    }
    
    return 0;
}