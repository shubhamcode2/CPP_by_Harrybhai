/*


//code 1
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);//constructor declaration

    void printNumber()
    {
        cout << "number " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(int x, int y)
{ // its a parameterized constructor and it takes two parameters;
    a = x;
    b = y;
}
int main()
{
    // implicit call
    complex a(2, 9);
    // explicitcall
    complex b = complex(4, 8);
    a.printNumber();
    b.printNumber();
    return 0;
}


*/

// code 2

#include <iostream>
using namespace std;

class point
{
    int x,y;
public:
    point(int , int );//constructor
   
    void displayPoint(){
        cout<<"point is ("<<x<<" , "<<y<<")"<<endl;
    }
    
};
 point :: point(int a, int b)
    {
        x=a;
        y=b;

    }

int main()
{
    point p(1,1);
    p.displayPoint();
    point q(3,9);
    q.displayPoint();


    return 0;
}


//Assignment.1
// create a function which takes two point objects and computes the distance betweeen those two points
//(hint: use freind function)
//example
//distance between (1,1 ) and (1,1) is 0
//distance between (0,1 ) and (0,6) is 5
//distance between (1,0 ) and (70,0)) is 69