#include<iostream>
using namespace std;
//linear search
int main()
{
    int array[] = {3,9,18,11,7};
    int key = 7;
    int size = 5;
    for (int index = 0; index < size; index++)
    {
        if (array[index] == key)
        {
            cout << "match at "<< index << endl;
            break;
        }
        if (index == size - 1 )
        {
            cout << "cannot find key" << endl;
        }
        
    }
    
    return 0;
}