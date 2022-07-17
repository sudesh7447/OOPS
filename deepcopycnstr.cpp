#include <bits/stdc++.h>
using namespace std;
class test
{
private:
    int a;
    int *p;

public:
    test()
    {
        a =0;
        // p = 0;        // shallow copy
        p = new int[a]; // deep copy
    }
    test(test &t)
    {
        a = t.a;
        p = t.p;        // shallow copy
        p = new int[a]; // deep copy
    }
    inline void fun();
};

void test::fun()
{
    cout << "Inline\n";
}

int main()
{
    test x;
  x.fun();

    return 0;
}