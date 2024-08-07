#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float InterestRate;
    float ReturnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 10
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    InterestRate = r;
    ReturnValue = principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    InterestRate = float(r) / 100;
    ReturnValue = principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "pricncipal amount was " << principal << endl
         << "return value after " << years
         << " Years is " << ReturnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}