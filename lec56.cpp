#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase=1;
    virtual void display()
    {
        cout << "displaying baseClass variablr varBase wohoo " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived = 2;
    void display()
    {
        cout << "displaying baseClass variablr varBase yeeh " << varBase << endl;
        cout << "displaying DerivedClass variablr varDerived yeeh" << varDerived << endl;
    }
};
class papa{
    public:
    int Papaval =130;
   virtual void kya(){
    cout<<" mai to paapa hu is duniya ka papa ";

    }
};
class Beta : public papa{
    public:
    int Betaval =90;
    void kya(){
    cout<<" mai to ameer baap ka beta hu aur khud bhi kamata hu";

    }
};

int main()
{

papa *bapuPointer;
papa paobj;
bapuPointer = &paobj;

Beta betaobj;
bapuPointer = &betaobj;
bapuPointer->kya();








    // BaseClass *Base_class_pointer;
    // BaseClass obj_base;
    // DerivedClass obj_derived;

    // Base_class_pointer = &obj_derived;
    // Base_class_pointer -> display();
    // Base_class_pointer = &obj_base;
    // Base_class_pointer -> display();
    return 0;
}