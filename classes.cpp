#include <bits/stdc++.h>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
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
    rectangle a, b;
    a.length = 10;
    a.breadth = 15;
    cout << a.area() << endl;
    cout<<a.perimeter()<<endl;

    return 0;
}