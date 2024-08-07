

//                      Public Derivation   Private Derivation  Protected Derivation
// Private members      Not Inherited       Not Inherited       Not Inherited
// Protected members    Protected           Private             Protected
// Public members       Public	            Private             Protected

#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

class derived : protected base
{

};
int main()
{
    base base1;
    derived derived1;
    // cout << base1.a << endl;
    // cout << derived1.a << endl;// will not work since a is protected in both base and derived classes

    return 0;
}