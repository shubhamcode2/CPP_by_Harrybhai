#include <iostream>
using namespace std;
// array of object
class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "item id is " << id << endl;
        cout << "item price is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = int shopitem[34];
    // 1.general store itm
    // 2.grocery store itm
    // 3.harware store itm
//     1   2   3
//     |       |           ptr runs for setdata and after the set data is completed the ptr will 
//     |       |           constinoue to go aage because we used ptr++ so we made a pointer ptrtemp for
//     |       step1.ptr         getdata to print it as ptrtemp points to the first object defaultly
//     step2.ptrtemp

  shopitem *ptr = new shopitem[size];
    shopitem *ptrTemp = ptr;
    int p;
    int i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }

    /*

        //if u dont want to use loop
        (ptr) ->setdata(1,55.98);
        (ptr+1) ->setdata(2,88);
        (ptr+2) ->setdata(3,98);

    */

    for (i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrTemp->getdata();
        ptrTemp++;
    }

    return 0;
}