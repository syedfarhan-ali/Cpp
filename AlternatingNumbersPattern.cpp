#include<iostream>
using namespace std;

int main()
{
    int length,width;
    cout << "Enter length and width" << endl;
    cin >> length >> width;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if ((i + j )% 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            } 
        }
        cout << endl;
    }
    
    return 0;
}