#include<iostream>
using namespace std;
//constructors with default argument lec32
class simple{
    int data1,data2;
    public:
    simple(int a,int b=9){
        data1=a;
        data2=b;

    }
    void printData();
};

void simple:: printData(){
    cout<<"data is "<<data1<<" & "<<data2<<endl;
}
int main()
{
    // simple s(9,0);
    simple s(9);
    s.printData();
    return 0;
}