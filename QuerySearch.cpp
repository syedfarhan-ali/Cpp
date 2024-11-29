#include<iostream>
#include<vector>
using namespace std;
//given Q queries, check if the given number is present in the array or not.
//note: value of all the elements in the array is less than 10 to the power of 5 
int main()
{
    int size;
    cout << "enter size of array : " << endl;
    cin >> size;
    cout << "enter elements of array : ";
    vector<int>vec(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    
    const int N = 1e5 + 10;
    vector<int>frequency(N,0);
    for (int i = 0; i < size; i++)
    {
        frequency[vec[i]]++;
    }
    
    cout << "Enter queries : " << endl;
    int queries;
    cin >> queries;

    while(queries--)
    {
        int queryElement;
        cin >> queryElement;
        cout << frequency[queryElement] << endl;
    }
    return 0;
}