#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class shubham
{
public:
    t1 a;
    t2 b;
    t3 c;
    shubham(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << endl
             << b << endl
             << c << endl;
    }
};
int main()
{
    shubham<> s(4, 5.5, 'h');
    s.display();
    shubham<float, char, char> s1(4.87, 'i', 'h');
    s1.display();

    return 0;
}