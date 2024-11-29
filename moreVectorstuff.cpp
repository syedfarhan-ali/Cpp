#include<iostream>
#include<vector>
using namespace std;
//insert erase traversing etc
int main()
{
    vector<int> vec;
    //for loop 
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    for (int index = 0; index < vec.size(); index++)
    {
        cout << vec[index] << " ";
    }
    cout << endl;

    vec.insert(vec.begin()+2,6);
    
    //for each loop 
    for(int element:vec)
    {
       cout << element << " ";
    }
    cout << endl;
    
    vec.erase(vec.end()-2);

    int iterator = 0;
    //while loop
    while (iterator < vec.size())
    {
        cout << vec[iterator] << " ";
        iterator++;
    }
    
    return 0;
}