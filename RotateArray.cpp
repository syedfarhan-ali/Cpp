#include<iostream>
using namespace std;
//using normal arrays
//rotate the given array 'a' by k steps, where k is non-negative.
//note: k can be greater then n as well where n is the size of array 'a'.
//given array[1,2,3,4,5] rotate by k = 2
//output should be array[4,5,1,2,3]
int main()
{
    int array1[] = {1,2,3,4,5};
    int size = sizeof(array1)/sizeof(array1[0]);
    int k = 2;
    k = k % size;
    int array2[5] = {0};
    int j = 0;

    for (int i = size - k; i < size; i++)
    {
        array2[j++] = array1[i];
    }

    for (int i = 0; i < size; i++)
    {
        array2[j++] = array1[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << " ";
    }
    
    
    return 0;
}