#include <iostream>
using namespace std;
// static data meember

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    };
    void getdata(void)
    {
        cout << "the id of employee is " << id
             << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id;//throws error
        cout<<"the value of count is "<<count<<endl;
    }
};

// int employee ::count; // default value is zero
// count is the static data member  of class employee
int employee ::count = 1000; // default value is zero

int main()
{
    employee shubham, satyam, pravin;
    // shubham.id =1;
    // shubham.count =1;//cannot do this as id and count is private
    shubham.setdata();
    shubham.getdata();
    employee::getCount();

    satyam.setdata();
    satyam.getdata();
    employee::getCount();

    pravin.setdata();
    pravin.getdata();
    employee::getCount();

    return 0;
}