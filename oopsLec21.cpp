#include<iostream>
using namespace std;
//lecture 21 oops concept class object;

class employee
{
    private:
        int a,b,c;

    public:
    int d,e;
    void setdata(int a1, int b1, int c1); //decleration
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
    void employee::setdata(int a1, int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
       
    }

int main()
{
    employee shubham;
    // shubham.a = 67;//u cant access a,b,c directly they are private in the class;
    shubham.d =98;
    shubham.e =27;
    shubham.setdata(1,2,3);
    shubham.getdata();
    return 0;
}



