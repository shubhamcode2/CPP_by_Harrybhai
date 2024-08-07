#include <iostream>
#include<cstring>
using namespace std;


//syntax
// template<class T1, class T2>
// class nameofclass{
// body
// }


template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this -> data1 <<endl<< this -> data2;
       // cout << data1 << data2;//harrry bhai did upperone 
    }
};

int main()
{
    // myClass <int,char> obj(1,'h');
    myClass <string,int> obj("humpe to hai hi ",9);
    obj.display();

    return 0;
}