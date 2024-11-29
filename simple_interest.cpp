#include<iostream>
using namespace std;
// This is the program to calculate simple interest
int main()
{
        int T;
        float P,R,SI;
    
    cout << "Welcome to Simple Interest Calculator" << endl;
    
    cout << "Enter Value of Principal" << endl;
    cin >> P;   
    
    
    cout << "Enter Value of Rate (In %)";
    cout << endl;
    cin >> R;
    

    cout << "Enter Value of Time (In years)";
    cout << endl;
    cin >> T;
    

    SI = (P*R*T)/100;
    cout << "Simple Interest : " << SI << endl;
    return 0;
}