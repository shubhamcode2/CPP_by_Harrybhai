#include <iostream>
using namespace std;

// Base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    employee() {}
};

/*
//derived class syntex
class {{derived-class-name}} : {{Visibility-mode}}  {{base-class-name}}
{
    class member/ methods etc...
}
note:
1.default visibility mode is private;
2.public visibility mode : public members of the base class becomes public members of derived class;
3.Private visibility mode : public members of the base class becomes private members of derived class;
4.private members are never inherited;


*/

// creating a programmer class derived From employee  base class

class programmer : public employee
{
public:
    int languageCode;
    programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee shubham(1), satyam(2);
    cout << shubham.salary << endl;
    cout << satyam.salary << endl;
    programmer skillF(867);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl; // without making the visibility mode to public u cant acces id , because visibility was private default .even if the id was a public member in the base class but when its inherited with a private visiblity it becomes private;
    skillF.getData();

    return 0;
}