#include<iostream>
#include<vector>
using namespace std;
//check if we can partition the array into two subarrays with rqual sum.
//More formally, check that the preix sum of a part of the array is 
//equal to the suffix sum of rest of the array.
bool checkPrefixSuffixSum(vector<int>vect)
{
    int totalSum = 0;
    int prefixSum = 0;
    int suffixSum = 0;

    for (int i = 0; i < vect.size(); i++)
    {
        totalSum += vect[i] ;
    }

    for (int i = 0; i < vect.size(); i++)
    {
        prefixSum += vect[i];
        suffixSum = totalSum - prefixSum;
        if (prefixSum == suffixSum)
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    int size;
    cout << "Enter size of the array" << endl;  
    cin >> size;

    vector<int>vec(size);
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    
    cout << checkPrefixSuffixSum(vec);
    return 0;
}