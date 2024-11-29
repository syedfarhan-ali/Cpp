#include<iostream>
#include<vector>
using namespace std;
//finding the difference b/w sum of even indices and odd indices
int main()
{
    vector<int>vec(6);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + vec[i];
        }
        else
        {
            oddSum = oddSum + vec[i];
        }
    }
    
    int result = evenSum - oddSum;

    cout << "Result is : "<< result << endl;
    return 0;
}