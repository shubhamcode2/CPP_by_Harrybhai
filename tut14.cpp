#include <iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;

int main()
{

   // ep shubham;
    struct employee shubham;
    shubham.eid = 1;
    shubham.favchar = 'a';
    shubham.salary = 1200000;
    cout << shubham.salary<<endl;
    cout << shubham.favchar<<endl;
    cout << shubham.eid<<endl;
    return 0;
}





union money
{
    /* data */
    int rice;//4
    char car;//1
    float pounds;//4
} ;
