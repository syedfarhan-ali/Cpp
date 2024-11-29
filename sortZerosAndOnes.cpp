#include<iostream>
#include<vector>
using namespace std;
//sort an array consisting of 0s and 1s
//Note: we traversed the vectos 2 times in this one 
void sortZerosAndOnes(vector <int>&vector)
{
    int zerosCount = 0;
    for(int ele:vector)
    {
        if (ele == 0)
        {
            zerosCount ++;
        }
    }
    for (int i = 0; i < vector.size(); i++)
    {
        if (zerosCount != 0) //or we could have used if(i<zerosCount)vector[i] = 0;
        {
            vector[i] = 0;
            zerosCount--;
        }
        else
        {
            vector[i] = 1;
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