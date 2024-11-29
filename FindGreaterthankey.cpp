#include<iostream>
#include<vector>
using namespace std;
//print count of numbers greater than key
int main()
{
    vector<int>vec(6);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    cout << "Enter key" << endl;
    int key;
    cin >> key;

    int greater = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > key)
        {
            greater++;
        }
        
    }
    cout << "Total number greater then key are : " << greater << endl;
    return 0;
}