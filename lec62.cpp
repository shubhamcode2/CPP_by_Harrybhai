#include<iostream>
#include<fstream>
// #include<string>
using namespace std;
// i/o using open()
int main()
{
    // ofstream o;
    // o.open("sample60.txt");
    // o<<"this is me : \n";
    // o<<"this is me also\n";
    // o<<"this is me alsi\n";
    // o.close();

    ifstream read;
    read.open("sample60.txt");
    string st;  
    // read>>st>>st2;
    // getline(read,st);
    // getline(read,st2);
    while (read.eof() == 0)
    {
        getline(read,st);
        cout<<st<<endl;
    }
    
    // cout<<st<<st2; 
    read.close();

    return 0;
}