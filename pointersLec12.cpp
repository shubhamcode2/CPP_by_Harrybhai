#include<iostream>
using namespace std;

int main()
{
    //lecture 12 ---pointers

    // What is a pointer -- pointer is a data type which
    //  holds address of other data types

    int a = 3;
    int* b;
    b = &a;
    // & is (address of )operator 
    cout<< "Adress of a is "<< &a<< endl;
    cout<< "Adress of a is "<< b<< endl;

    // * is (value at) dereference oprerator
    cout<< "value at address b "<< *&a<<endl; // this ajeeb because u can get the value by just writing a there;
    cout<< "value at address b "<< *b<<endl;


// pointer to pointer -- not recommended right now

    int** c = &b;
    cout<< "Adress of b is "<< &b<< endl;
    cout<< "Adress of b is "<< c<< endl;

    cout<< "value at address c "<< c<<endl;
    cout<< "value at address value_at(value_at(c)) "<< **c<<endl;






    return 0;
}