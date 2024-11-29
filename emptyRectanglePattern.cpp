#include<iostream>
using namespace std;

int main()
{
    int length = 0,width = 0 ;
    cout << "Enter length and width of rectangle" << endl;
    cin >> width;
    cin >> length;

    for (int i = 1; i <= width; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i == 1 || j == 1 || i == width || j == length)
            {
                cout << "*";
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