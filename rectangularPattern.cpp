#include<iostream>
using namespace std;

int main()
{
    int length = 0,width = 0;
    cout << "Enter length and width of rectangle" << endl;
    cin >> length;
    cin >> width;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "*";
        }
        cout << endl; 
    }
    return 0;
}