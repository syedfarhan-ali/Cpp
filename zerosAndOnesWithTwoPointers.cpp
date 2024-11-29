#include<iostream>
#include<vector>
using namespace std;
//sort an array consisting of 0s and 1s
//Note: we traversed the vectos from both sides in this one 
void sortZerosAndOnes(vector <int>&vector)
{
    int left_ptr = 0;
    int right_ptr = vector.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (vector[left_ptr] == 1 && vector[right_ptr] == 0)
        {
            vector[left_ptr++] = 0;
            vector[right_ptr--] = 1;
            
        }
        if (vector[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (vector[right_ptr] == 1)
        {
            right_ptr--;
        }
        
    }
    
}

int main()
{
    int size;
    cout << "Enter size of vector : ";
    cin >> size;

    vector<int>vec(size);

    cout << "Enter elements only 0s and 1s" << endl ;
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    sortZerosAndOnes(vec);
    for(int ele:vec)
    {
        cout << ele << " ";
    }
    return 0;
}