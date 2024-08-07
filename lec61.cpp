#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connecting our file with sout stream
    ofstream sout("sample60.txt");

    //creating a nme string filling it with the string enterdd by the user
    string name;
    cout<<"enter your name";
    cin>>name;
    sout<<"my name is "<<name;
    sout.close();//breakhhing the connectoon

    //writing a string to the file
    ifstream sin("sample60.txt");
    string con;
    // sin>>con;
    getline(sin,con);
    cout<<"hello "<<con;
    sin.close();
    return 0;
}