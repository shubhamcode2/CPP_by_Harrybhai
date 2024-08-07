#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase;
    void display()
    {
        cout << "displaying baseClass variablr varBase " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived;
    void display()
    {
        cout << "displaying baseClass variablr varBase " << varBase << endl;
        cout << "displaying DerivedClass variablr varDerived " << varDerived << endl;
    }
};
int main()
{
    BaseClass *Base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    Base_class_pointer = &obj_derived; // pointing base class pointer to the derived class
    Base_class_pointer->varBase = 34;
    Base_class_pointer->display();//displays the base class display
    // Base_class_pointer->varDerived = 340;//throws an error as baseclasspointer can reach only to the inherited member from the base class into the derived class;
    
    Base_class_pointer->varBase = 3400;
    Base_class_pointer->display();

    DerivedClass *Derived_class_Pointer;
    Derived_class_Pointer = &obj_derived;
    Derived_class_Pointer ->varBase=8500;//can change because inherited and also availeble
    Derived_class_Pointer ->varDerived=67;
    Derived_class_Pointer->display();// display of derived class
    return 0;
}