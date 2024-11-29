#include <iostream>
using namespace std;

class area
{
public:
    float length, width;
    double area;
    int input()
    {
        cout << "Welcome to area calculator" << endl;
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter width : ";
        cin >> width;
        return length, width;
    }
    int areaProcessing()
    {
        area = length * width;
        return area;
    }
    int shapeChecker()
    {
        if (length == width)
        {
            cout << "It's a square" << endl;
        }
        else
        {
            cout << "It's a rectangle" << endl;
        }
    }
    void output()
    {
        cout << "Area : " << area << " sq units" << endl;
    }
};
int main()
{

    area instance1;
    instance1.input();
    instance1.areaProcessing();
    instance1.shapeChecker();
    instance1.output();
    cout << "Program has exited without errors :)" << endl;

    return 0;
}