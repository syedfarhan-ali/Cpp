#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//given an integer array 'a' sorted in non-decreasing order,
//return an array of the squares of each number sorted in non-decreasing order

void sortVector(vector <int>&vec)
{
    vector<int>ans;
    int leftPtr = 0;
    int rightPtr = vec.size() - 1;

    while (leftPtr <= rightPtr)
    {
        if (abs(vec[leftPtr]) < abs(vec[rightPtr]))
        {
            ans.push_back(vec[rightPtr]*vec[rightPtr]);
            rightPtr--;
        }
        else
        {
            ans.push_back(vec[leftPtr]*vec[leftPtr]);
            leftPtr++;
        } 
    }
    reverse(ans.begin(),ans.end());
    for(int ele:ans)
    {
        cout << ele << " ";
    }
}

int main()
{
    int size;
    cout << "Enter size :" << endl;    
    cin >> size;

    vector<int>vec(size);

    cout << "Enter elements of vector in non-decreasing order " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    
    sortVector(vec);
    return 0;
}