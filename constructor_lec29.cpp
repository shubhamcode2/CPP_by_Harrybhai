#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member with same name as of the class
    // its used to initialize the object in its class
    // its automatically invoked when a object is created
    complex(void); // constructor declaration
    void printData()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void) //-----this is a default constructor, it takes no parameters
{
    a = 10;
    b = 0;
    cout<<"ram"<<endl;
};

int main()
{
    complex c1,c2;
    c1.printData();
    c2.printData();
    return 0;
}


//Proprties of constructors
//1.it shuold be declared in the public section of the class
//2. they are automatically invoked whenever the object is created
//3.they can not return values and dont have return type
//4. it can have default arguments
//5. we can not refer to their address
