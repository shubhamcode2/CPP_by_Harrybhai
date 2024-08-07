#include<iostream>
using namespace std;

int main()
{
    //lecture 13 -- array and pointer aritrhmatic in c++
    // array --> collection of similar type stored in contiguous memory location
   
   int marks[] = {22,45,38,39};
//    int mathMarks[4];
//    mathMarks[0]= 502;
//    mathMarks[1]= 108;
//    mathMarks[2]= 338;
//    mathMarks[3]= 638;

//     cout<<"marks"<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
   
//    cout<<"mathMarks"<<endl;
//    cout<<mathMarks[0]<<endl;
//    cout<<mathMarks[1]<<endl;
//    cout<<mathMarks[2]<<endl;
//    cout<<mathMarks[3]<<endl;
   
//    //changing the value in array;
//    mathMarks[2] = 0;
//    cout<<mathMarks[2]<<endl;

   //  Print array using loop

//    int marks[] = {22,45,38,39};
//    int i=0;
//    while(i<4){
//     cout<<marks[i]<<endl;
//     i++;
//    }



//Pointers and arrys

    int* p =marks; // i made p a pointer to array marks now go down
    cout<<"the value of marks[0] / *p: "<<*p<<endl;
    cout<<"the value of marks[1] / *(p+1): "<<*(p+1)<<endl;
    cout<<"the value of marks[2] / *(p+2): "<<*(p+2)<<endl;
    cout<<"the value of marks[3] / *(p+3): "<<*(p+3)<<endl;
   
   
   
   
   
    return 0;
}