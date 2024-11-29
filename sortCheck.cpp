#include<iostream>
#include<vector>
using namespace std;
//check if array is sorted or not
int main()
{
    vector<int> vec(6);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    
    bool issorted = true;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] <= vec[i-1])
        {
            issorted = false;
            break;
        }
    }
    
    if (issorted == true)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }
    
    
    return 0;
}