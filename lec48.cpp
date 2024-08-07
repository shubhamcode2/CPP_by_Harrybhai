#include <iostream>
using namespace std;
/*

case 1:
class b: public a{
    order of execution of constructor will be first a() then b()
};

case2:
class a : public b, public c{
    order of execution of constructor will be first b() then b() then a()
};

case3:

class a : public b, virtual public c{
    order of execution of constructor will be first c() then b() then a()

}
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor is called" << endl;
    }

    void printDatabase1(void)
    {
        cout << "the value of base1 data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor is called" << endl;
    }

    void printDatabase2(void)
    {
        cout << "the value of base2 data2 is " << data2 << endl;
    }
};


class derived : public base2, public base1{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d): base1(a), base2(b){
        derived1 =c;
        derived2 =d;
        cout<<"derived classs constructor called"<<endl;
    } 
    void printDataDerived(void){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;
    }

};
int main()
{
    derived shubham(1,2,3,4);
    shubham.printDatabase1();
    // shubham.printDatabase2();
    // shubham.printDataDerived();

    return 0;
}