#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    // By default everything is private in class
    int length, breadth;

public:
    void setData();
    bool isValid();
    int area();
};
void Rectangle::setData()
{
    cout << "Enter length and breadth::";
    cin >> length >> breadth;
}
bool Rectangle::isValid()
{
    if (length <= 0 || breadth <= 0)
        return 0;
    return 1;
}
int Rectangle::area()
{
    // Inside member function we are using another member function isValid()--> Nesting of member function
    if (isValid())
    {
        cout << "Area::";
        return length * breadth;
    }
    else
        cout << "Rectangle is not valid" << endl;
    return 0;
}

int main()
{
    Rectangle r;
    r.setData();
    cout << r.area() << endl;
}
