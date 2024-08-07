#include <iostream>
#include <string>
using namespace std;
// OOPs recap and nesting of memeber function lecture` number 22 stroustroup

/*

 C++ Was initialy called c with classes by
Class is the exention of structure in c
 structure has limitations like --> memebers were public and ther were no methods
 Classes are structure + more, classes can have method and property, classes can
 make few members as private and few as public
 structur in cpp is typedef
 u can declare object along with class declaration like this -->
           // class employee{
             //   // class defination
           // } harry , shubham ,ravi;
 harry.salry = 9 //makes no sense if salary is private

*/

// Nesting of Member Function
class binary
{
   // private://by default class member s are private
    string s;
    void check_binary(void);// made it to priavte because we are using it by once_compliment(), no one directly can access this now from outside;

public:
    void read(void);
    void once_compliment(void);
    void Display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary formate" << endl;
            exit(0);
        }
       
    }
}
void binary ::once_compliment(void)
{
    check_binary();//function inside a function became nested function member;Thankyou for clearing out love :)
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::Display(void)
{
    cout << "displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.check_binary(); // this done into once_compliment();
    b.Display();
    b.once_compliment();
    b.Display();

    return 0;
}