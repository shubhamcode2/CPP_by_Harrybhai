#include <iostream>
using namespace std;

class shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initcounter(void)// initcounter referes to initializing a counter;
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "enter the id of your item no " << counter+1 <<":";
    cin >> itemId[counter];
    cout << "enter the price of your item ";
    cin >> itemPrice[counter];
    counter++;
    
}

void shop :: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item id " <<  itemId[i] << " is " <<  itemPrice[i]<< endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}