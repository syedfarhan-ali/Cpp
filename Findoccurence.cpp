#include<iostream>
#include<vector>
using namespace std;
//finding last occurence of a number 
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
    
    int occurence = -1;
    //from start to end - forward
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            occurence = i;   
        } 
    }

    cout << "key's last occurence is : "<< occurence << endl;
    //from end to start - reverse
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] == key)
        {
            occurence = i;   
            break;
        } 
    }
    cout << "key's last occurence is : "<< occurence << endl;
    return 0;
}