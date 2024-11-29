#include<iostream>
#include<vector>
using namespace std;
//sort an array so that even integers go at begining and odd goes at ending 
void sortVector(vector <int> &vector)
{
    int leftPtr = 0;
    int rightPtr = vector.size() - 1;

    while (leftPtr < rightPtr)
    {
        if (vector[leftPtr] % 2 != 0 && vector[rightPtr] % 2 == 0)
        {
            swap(vector[leftPtr],vector[rightPtr]);        
            leftPtr++;
            rightPtr--;
        }
        if (vector[leftPtr] % 2 == 0)
        {
            leftPtr++;
        }
        if (vector[rightPtr] % 2 != 0)
        {
            rightPtr--;
        }
        
    }
    
}
int main()
{
    int size;
    cout << "Enter size of vector : ";
    cin >> size;
    vector<int>vec(size);

    cout << "Enter elements of vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    
    sortVector(vec);
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    
    return 0;
}