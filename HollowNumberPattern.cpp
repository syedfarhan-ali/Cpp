#include<iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter Input : " << endl;
    cin >> input ;
    for (int i = 1; i <= input; i++)//for printing the rows 
    {
     for (int j = 1; j <= input; j++)//for printing the values in the rows 
            {
            if (j == 1 || j == input || i == 1 || i == input)//checking for 1st and last row/column
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
            }
       cout << endl;
       
    }
    
    return 0;
}