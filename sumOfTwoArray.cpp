#include<iostream>
using namespace std;

int main()
{
    int inputArray1[5] = {0},
        inputArray2[5] = {0},
        resultArray[5] = {0};

    cout << "Enter First array" << endl;
    for (int j = 0; j < 5; j++)//Input of 1st array
    {
        cin >> inputArray1[j];
    }

    cout << "Enter second array" << endl;
    for (int k = 0; k < 5; k++)//Input of 2nd array
    {
        cin >> inputArray2[k];
    } 

    for (int i = 0; i < 5; i++)//loop for addition calculation
    {
        resultArray[i] = inputArray1[i] + inputArray2[i];
    }
    cout << "Result : { ";
    for (int j = 0; j < 5; j++)//loop for printing result
    {
        cout<< resultArray[j] << " ";
    }
    cout << "}" << endl;
    return 0;
}