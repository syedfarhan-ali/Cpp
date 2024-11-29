#include<iostream>
#include<vector>
using namespace std;
//finding number of occurence of a number 
int main()
{
    vector<int>vec(6);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    
    int key;
    cout << "Enter key : " << endl;
    cin >> key;
    
    int occurence = 0;
   
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            occurence++;   
        } 
    }

    cout << "key's last occurence is : "<< occurence << endl;
   
    return 0;
}