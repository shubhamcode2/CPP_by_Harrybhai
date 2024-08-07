#include<iostream>
#include<fstream>
using namespace std;
//the usefull classess to woek with files in c++
//fstreambase -->baseclass
//ifstream -->derived from fsteambase
//ofstream  -->derived from fsteambase

//in order to work with files in c++ , you will have to open it . there are 
//primarily two ways to open a file
//1.using the constructor 
//2. using the member open() of the class 
int main()
{
    string st="shubham bhai backckodi amt kar nerd bno for d=somtime";
    // string st2;
    //opening file using constructor and writing it;
    ofstream jao("sample60.txt");//write operation//u can write anything jao out rahul cout anything same with "in" also
    jao<<st;
   
    // //opening file using constructor and reading it;
    // ifstream in("sample60b.txt");//write operation
    // // in>>st2;
    // getline(in,st2);
    // cout<<st2;
    
    return 0;
}