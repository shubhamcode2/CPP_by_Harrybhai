#include <iostream>
using namespace std;
// destructor never takes any argument nor retun any value;
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "this is the time when the constructor is called for object Number " << count << endl;
    }
    ~Num()
    {
        cout << "this is the time when the destructor is called for object Number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main function" << endl;
    cout << "Creating our first object N1" << endl;
    Num N1;
    {
        cout<<"Entering this block"<<endl;
        cout << "Creating two more objects" << endl;
        Num N2,N3;
        cout<<"Exiting this block"<<endl;

    }//scope exits and ends obj N2,N3 so destructor for same is called here
    cout<<"Back to main"<<endl;

    return 0;//destructur called after this for N1
}