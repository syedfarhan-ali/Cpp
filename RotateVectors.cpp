#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//using vectors
//rotate the given array 'a' by k steps, where k is non-negative.
//note: k can be greater then n as well where n is the size of array 'a'.
//given array[1,2,3,4,5] rotate by k = 2
//output should be array[4,5,1,2,3]
int main()
{
    vector<int>vec = {1,2,3,4,5};
    int k = 2;
    k = k % vec.size();
    reverse(vec.begin(),vec.end());
    reverse(vec.begin(),vec.begin() + k);
    reverse(vec.begin() + k , vec.end());

    for(int i:vec)
    {
        cout << i << " ";
    }
    return 0;
}