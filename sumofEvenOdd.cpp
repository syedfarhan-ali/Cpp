#include<iostream>
using namespace std;

int main()
{
    int sum = 0,
    endValue;
    cout << "Enter input" << endl;
    cin >> endValue;
    for (int iteration = 1; iteration <= endValue; iteration++)
    {
        if (iteration % 2 == 0)//if n is even then it will be -ve 
        {
            sum -= iteration;
        }
        else//if n is odd then it will be +ve
        {
            sum += iteration;
        }
    }
    cout << "Sum is : " << sum << endl;
    return 0;
}