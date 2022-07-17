#include <bits/stdc++.h>
using namespace std;
class rectangle
{

    int length;
    int breadth;

public:
    void setlength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            l = 0;
        }
    }
    void setbreadth(int b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }
    int getlength()
    {
        return length;
    }
    int setbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle r;
    r.setlength(10);
    r.setbreadth(15);
    cout << r.area() << endl;
    return 0;
}