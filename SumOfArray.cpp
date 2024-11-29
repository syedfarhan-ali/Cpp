#include<iostream>
using namespace std;

int main()
{
    int array[5] = {0},sum = 0;
    cout << "Enter five values you want to sum" << endl;
    for (int j = 0; j < 5; j++)
    {
        cin >> array[j];//Input in the array
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array[i];//To calculate sum of array elements
    }
    cout << "Sum is "<< sum << endl;//final output
    return 0;
}