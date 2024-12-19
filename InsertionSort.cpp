#include<iostream>
using namespace std;
//insertion sort
int main()
{
    int arr[5] = {4,5,1,2,3};
    for (int i = 1; i < 5; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        
    }
    
    //output
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}