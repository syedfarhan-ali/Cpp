#include<iostream>
#include<vector>
using namespace std;
//given an array of integers of size n.
//Answer q queries where you need to print the 
//sum of values in a given range of indices from l to r(both included).
//Note: The values of l and r in queries follow 1-based indexing. 

int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    vector<int>vec(size + 1,0);
    cout << "Enter elements of array" << endl;
    for (int i = 1; i <= size; i++)
    {
        cin >> vec[i];
    }
    
    for (int i = 1; i <= size; i++)
    {
        //calculating prefix sum array
        vec[i] = vec[i] + vec[i - 1];
    }
    

    int queryAmount;
    cout << "Enter amount of queries" << endl;
    cin >> queryAmount;

    while (queryAmount--)
    {
        int l,r;
        cout << "Enter l and r" << endl;    
        cin >> l >> r;
        
        int ans = 0;
        //ans = prefixsumarray[r] - prefixsumarray[l - 1]
        ans = vec[r] - vec[l - 1];
        cout << "ans is : " << ans << endl;
    }
    
    return 0;
}