#include <iostream>
using namespace std;

// initialization list in constructor lecture number 49 [how far we came ! mann everything is possible]);
// syntex for initialization list in constructor
//  constructor (argument-list) : initialization-section{
//  assignment and other code;
// }

// class test{
//     int a,b;
//     public:
//     test(int t1,int t2) : a(t1), b(t2) { constructor-body}
// };

class test
{
    int a, b;

public:
    // test(int t1, int t2) : a(t1), b(t2)
    // test(int t1, int t2) : a(t1), b(t2+t1)
    // test(int t1, int t2) : a(t1), b(t2*2)
    // test(int t1, int t2) : a(t1), b(a + t2)
    // test(int t1, int t2) : b(t2), a(t1 + b) // a gives here a garbage value because when me made the class we declared a and be in an order, if that order breaks it gives an garbage value, so has to be initialized first;
    test(int t1, int t2) : a(t1)
    {
        b = t2; // yes it is possible to declare it here
        cout << "constructor initiazation wala called" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{
    test test1(8, 5);

    return 0;
}