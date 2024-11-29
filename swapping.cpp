#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a = 5 ;
    b = 10;
    
    cout <<"a is " << a << endl;
    cout <<"b is " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout <<"a is " << a << endl;
    cout <<"b is " << b << endl;
    return 0;
}