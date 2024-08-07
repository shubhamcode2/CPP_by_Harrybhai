#include <iostream>
using namespace std;
//pointer to object
class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // complex c;
    complex *ptr = new complex;
    // complex *ptr = &c;
    // (*ptr).setdata(6,7);//is same as
    ptr->setdata(8, 9); // arrow operrator// ptr jisko bhi pointer hai uska karo setdata
    (*ptr).getdata();
    // c.setdata(4,5);
    // c.getdata();

    // array of object -- detailed in lec52

    complex *ptr1 = new complex[4];
    ptr1->setdata(1, 0);
    ptr1->getdata();
    return 0;
}