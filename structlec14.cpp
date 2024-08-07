#include<iostream>
using namespace std;

// struct employee{
//     int empId;
//     float Salary;
//     char FavChar;
// };


// can use this also
typedef struct employee{
    int empId;
    float Salary;
    char FavChar;
}empl;


    union money //can use only one at a time
    {
        /* data */
        int rice;
        float pounds;
        char car;
    };
   

    int main(){
        // empl shubham;
        // // struct employee shubham;
        // struct employee Rahul;
        // struct employee sham;
        // shubham.empId = 1;
        // shubham.Salary = 100000;
        // shubham.FavChar = 'a';
        // sham.Salary=45000;
        // cout<<shubham.empId<<endl;
        // cout<<shubham.Salary<<endl;
        // cout<<sham.Salary<<endl;

        // union money m1;
        // m1.rice=5;
        // // m1.pounds=5.9;
        // // m1.car='c';
        // cout<<m1.rice<<endl;
        // // cout<<m1.pounds<<endl;
        // // cout<<m1.car<<endl;

        enum family{mummy , papa, didi};
        family first = mummy;
        cout<<first<<endl;
        cout<<mummy<<endl;
        cout<<papa<<endl;
        cout<<didi<<endl;
    return 0;

    }