#include<iostream>
using namespace std;
//finding second largest number.exe

// int largestnumber(int array[],int size)
// {
//     int max = array[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//         }
        
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] == max)
//         {
//             array[i] = -1;
//         }
        
//     }
//     return max;
// }
int secondLargest(int array[],int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    int second_max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > second_max && array[i] != max)
        {
            second_max = array[i];
        }
        
    }
    
    return second_max;
}
int main()
{
    
    int array[] = {2,3,5,7,6,1,7};
    int size = sizeof(array)/sizeof(array[0]);
    // largestnumber(array,size);
    // cout << largestnumber(array,size);
    cout << secondLargest(array,size);
    return 0;
}