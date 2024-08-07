#include <iostream>
using namespace std;
// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // individualy declaring function as freind
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);
    // alternate -- amke the whole class(calculator) freind in one go so u dont have to declare many function as freind and make the code lengthy;
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 6);
    o2.setNumber(1, 9);

    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int resCo = calc.sumCompComplex(o1, o2);
    cout << "sum of real part of o1 and o2 is " << res << endl;
    cout << "sum of complex part of o1 and o2 is " << resCo << endl;
    return 0;
}