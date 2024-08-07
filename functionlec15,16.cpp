#include <iostream>
using namespace std;

// function prototype
//  Datatype function_name(argument)
//  int sum(int a,int b);//-->accceptable
//  int sum(int a,b);//--> not accceptable
//  int sum(int,int);//-->  accceptable
//  void g(void)
//  void g();

// int main()
// {
// int num1,num2;
// cout<<"enter num1"<<endl;
// cin>>num1;
// cout<<"enter num2"<<endl;
// cin>>num2;
// //num1 and num2 are actual parameters;
// cout<<"sum is "<<sum(num1,num2);
// g();

// return 0;
// }

// if i write it here after the main function i have to give
//  a function prototype above main to locate and use the function;
//  formal parameters a and b will be taking values from actual
//  parameters num1 and num2;
//  int sum(int a,int b){
//      int c = a+b;
//      return c;
//  }
//      void g(){
//          cout<<"\n hello";
//      }







//----> Call by value and call by references in c++ lecture 16
//normal tryin to swap but cant
// int swap(int a,int b){
//     int temp = a;
//     a =b;                   //this will not swap a and b
//     b=temp;
// }
//Using pointer references
// int swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b; // this will swap a and b
//     *b = temp;
// }

//Call by reference using c++ reference variables
int swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b; // this will swap a and b
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "x and y " << x << " " << y << endl;
    // swap(x,y);//this will not swap x and y
    // swapPointer(&x, &y); // this will swap x and y using pointer reference
    swapReferenceVar(x, y); // this will swap x and y using reference variables
    cout << "x and y " << x << " " << y << endl;

    return 0;
}
