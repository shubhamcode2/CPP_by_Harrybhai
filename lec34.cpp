#include <iostream>
using namespace std;
// copy constructor
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {
        a = num;
    }

    // when no copy constructor is found compiler itself supplies a copy constructor
    // so if u comment this constructor below it is not going to affect the code in wrong way
    Number(Number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number of object is " << a << endl;
    }
};

int main()
{
    Number x, y(8), z(45), z2; // we dont provided any value to x so we have to make a constructor above without any parameter so that x donot give any error
    x.display();
    y.display();
    z.display();
    // copy constructor copies an object
    // z1 should exactly resemble z,y or x
    Number z1(x); // copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called because its bna bnaya and u are doing just assingnment
    z2.display();

    Number z3 = y; // copy constructor invoked
    z3.display();

    return 0;
}