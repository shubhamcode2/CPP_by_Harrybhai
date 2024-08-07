#include<iostream>
using namespace std;
//ambiguity resolution in inheritance lec 43

class base1 {

public:
    void greet(){
        cout<<"how are you?"<<endl;
    }

};
class base2 {
public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }

};

class derived : public base1, public base2{
    int a;
    public:
    void greet(){
        // base1::greet();
        base2::greet();
    }
};


// class b{
//     public:
//     void say()
// {
//     cout<<"what say bro"<<endl;
// }
// };

// class d : public b{
//     int a ;
//     public:
//     d's new say method will overwriite base class's say() method;
//     void say(){
//         cout<<"i say u are good"<<endl;

//     // }
// };

int main()
{

    // // ambiguity 1
    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    derived obj3;
    obj3.greet();

    // // ambiguity 2
    // b b1;
    // b1.say();
    // d d1;
    // d1.say();


    return 0;
}