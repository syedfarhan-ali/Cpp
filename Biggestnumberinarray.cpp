#include<iostream>
using namespace std;
//biggest number in array
int main()
{
    int array[] = {3,7,18,9,11};
    int size = 5;
    int max = array[0];
    for (int index = 0; index < size; index++)
    {
        if (max < array[index])
        {
            max = array[index];
        }
        else
        {
            continue;
        }
        
        
    }
      cout << max << endl;
    return 0;
}