#include <iostream>
using namespace std;

// Note: lec20 is oops theory
/*

factorial of a number
6! = 6*5*4*3*2*1 = 720
0! = 1
1! =1
n! = n * (n-1)
*/


// u cant get to the base in one play
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);// here factorial calls again and again
// }

// int fibo(int n){ //series is --> 1 1 2 3 5 8 13 21...
//     if(n<2){
//         return 1;
//     }
//     return fibo(n-1) + fibo(n-2);
// }

/*

step by step factorial
factorial(4) = 4 * factorial(3);
factorial(4) = 4 * 3 *factorial(2);
factorial(4) = 4 * 3 * 2 * factorial(1);
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24;
*/

// int main()
// {
//     int a;
//     cout<<"enteer the number"<<endl;
//     cin>>a;
//     // cout<<"factorial of "<< a<<"! is " <<factorial(a);
//     cout<<"Fibonacci at position "<<a<<" is "<<fibo(a);

//     return 0;
// }








// Lecture 19
// Function overloading and Examples  ----> same name of the function but can do
// different operations;

float area(float hight, float lenght)
{
    return hight * lenght;
}

float area(float radius)
{
    return 3.14 * (radius * radius);
}

int main()
{

    float hight, lenght, radius;
    // cout<<"enter hight "<<endl;
    // cin>>hight;
    // cout<<"enter lenghth"<<endl;
    // cin>>lenght;
    // cout<<"Area of Rectangle is "<<area(hight,lenght);
    cout << "enter radius" << endl;
    cin >> radius;
    cout << "radius of thhe the circul is " << area(radius);
}