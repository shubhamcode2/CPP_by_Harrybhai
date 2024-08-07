#include <iostream>
using namespace std;

// float average (int a, int b){
//     float avg = (a+b)/2.0f;
//     cout<<"the average is ";
//     return avg;
// }

// float average1 (int a, float b){
//     float avg = (a+b)/2.0f;
//     cout<<"the average is ";
//     return avg;
// }

template <class t1, class t2>
float average(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    cout << "the average is ";
    return avg;
}

template <class t>
void swapi(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{

    // float av= average(3,4);
    // float av1 = average(9.0088877, 4.9);
    // // cout<<av;
    // cout << av1;

    int x = 0, y = 9;
    swapi(x, y);
    cout << x << y;

    return 0;
}