// Easy example of Freind function
/*


#include <iostream>
using namespace std;
// forward declaration
class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "summing datas of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(2);

    Y b1;
    b1.setValue(9);
    add(a1,b1);

    return 0;
}


*/

// Difficult example of freind function



// #include <iostream>
// using namespace std;
// class c2;
// class c1
// {
//     int val1;

// public:
//     void indata(int a)
//     {
//         val1 = a;
//     }
//     void display()
//     {
//         cout << val1 << endl;
//     }
//     friend void exchange(c1 &,c2 &);
// };

// class c2
// {
//     int val2;

// public:
//     void indata(int a)
//     {
//         val2 = a;
//     }
//     void display()
//     {
//         cout << val2 << endl;
//     }
//     friend void exchange(c1 &,c2 &);
// };

// void exchange(c1 &x, c2 &y){
//     int temp = x.val1;
//     x.val1=y.val2;
//     y.val2= temp;
// }

// int main()
// {
//     c1 oc1;
//     c2 oc2;

//     oc1.indata(22);
//     oc2.indata(44);
//     exchange(oc1,oc2);

//     cout<<"after exchanging the number we get oc1 " <<endl;
//     oc1.display();
//     cout<<"after exchanging the number we get oc2 " <<endl;
//     oc2.display();



//     return 0;
// }