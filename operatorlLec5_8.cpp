#include<iostream>
#include<iomanip>
using namespace std;
// lec 5 and aage
int main(){
    // cin>> "extraction operator";
    // cout<< "insertion operator";

    // Operators

    // lec 6
    //arithmatic operator
/*
    int a = 4 , b = 5;

    cout<< a+ b<<endl; //will print 9
    cout<< a- b<<endl; //will print -1
    cout<< a* b<<endl; //will print 20
    cout<< a/ b<<endl; //will print 0
    cout<< a% b<<endl; //will print 4
    cout<< ++a<<endl; //will print 5
    cout<< --a <<endl; //will print 4
    cout<< a++ <<endl; //will print 4
    cout<< a-- <<endl; //will print 5
    cout<< --a <<endl<<endl<<endl; //will print 3
*/

    //assgnment and comparison operators(do it u its easy)

    // logical operators

    // cout<< ((a==b) && (a<b))<<endl;// if both are true it will be true "and operator" prints 1;but its not true and it'll print 0;
    // cout<< ((a==b) || (a<b))<<endl;// if one is true it will be true "or operator" prints 1; its  true and it'll print 1;
    // cout<< (!(a<b))<<endl;// if one is true it will  "not operator" prints 0; its  true and it'll print 0;it just make it a not false a true and true a false;
//bitwise not covered;

//lec 7
// variables and typecasting

    // if u type a decimal numnebr u will get data type as double becausec its default ,
    //  if you want to make it float data type 
    // then have to write an "f" in the last; as  float a= 45.8f;
    // can use "l" at the end to maeke the datatype a long double
// check there sizes using sixeof() putting l,L,F,f at the end;


// **********reference variable************** many name to a single thing
/*
float x=556;
float & y = x;
cout<<x<<endl;
cout<<y<<endl;
*/

// typecasting

// int f= 40;
// float g= 4.36;
// cout<<f+g<<endl;
// cout<< f + int(g)<<endl;
// cout<< f + (int)(g)<<endl;

// lec 8 -- constant, manipulator and Operator precidence


//  const int r =0;
//  r = 9; //gives an error because r is an error u camt change it;
//  cout<< r;

//Manipulators   ---> endl,setw()    use header file " #include<iomanip> "

//  int d = 34, e = 7658, f = 899, g=1;

//  cout<< "d is " << setw(8) << d << endl;
//  cout<< "e is " << setw(8) << e << endl;
//  cout<< "f is " << setw(8) << f << endl;
//  cout<< "g is " << setw(8) << g << endl;


// learn about operator precidence

 int h = 9, i = 6;
 int c= ((((h*5)+i)-45)+87);// multiply has precidence over plus and minus +/-;
 cout<<c;
    return 0;
}
