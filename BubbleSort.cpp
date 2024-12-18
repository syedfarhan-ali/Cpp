#include<iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i; j++)
        {
            if (vec[j] > vec[j+1])
            {
                swap(vec[j],vec[j+1]);
            }
            
        }
        
    }
    
}
int main()
{
    vector<int> arr = {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
    bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}