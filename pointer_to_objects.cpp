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
    rectangle r;
    rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 15;
    cout << p->area() << endl;

    // Creating an object in Heap

    rectangle *q = new rectangle();
    q->length = 10;
    q->breadth = 15;
    cout << q->area() << endl;

    return 0;
}