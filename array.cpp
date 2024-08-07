#include <iostream>
using namespace std;
int main()
{
    int marks[] = {45, 87, 55, 29};
    int mathmarks[4];
    mathmarks[0] = 347;
    mathmarks[1] = 697;
    mathmarks[2] = 767;
    mathmarks[3] = 567;
    cout << "these are maths markis" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << "these are allover marks" << endl;
    marks[2] = 67890;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks" << i << "is " << marks[i] << endl;
    }
    int *p = marks;
    cout << "the value of marks[0] is " << *p << endl;
    cout << "the value of marks[1] is " << *(p + 1) << endl;
    cout << "the value of marks[2] is " << *(p + 2) << endl;
    cout << "the value of marks[3] is " << *(p + 3) << endl;

    cout<<"here is a known marks"<<++p;

}