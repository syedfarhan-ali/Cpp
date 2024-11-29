#include<iostream>
#include<vector>
using namespace std;
//given an integer array 'a', 
//return the prefix sum/running sum in the same array without creating a new array.
void runningSum(vector <int> &vect)
{
     for (int i = 1; i < vect.size(); i++)
    {
        vect[i] = vect[i] + vect[i - 1];
    }
}
int main()
{
    int size;
    cout << "enter size" << endl;
    cin >> size;

    vector<int>vec(size);
    cout << "enter elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    
    runningSum(vec);
    
    for(int ele:vec)
    {
        cout << ele << " ";
    }
    return 0;
}