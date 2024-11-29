#include<iostream>
#include<vector>
using namespace std;
//find the number of pairs whose sum is equal to the target sum
int main()
{
    int array[] = {3,4,6,7,1};
    int size = sizeof(array)/sizeof(array[0]);
    int targetSum = 7;
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(array[i] + array[j] == targetSum)
            {
                pairs++;
            }    
        }
        
    }
    cout << "Total pairs  = "<< pairs << endl;
    return 0;
}