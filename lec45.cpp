#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_no(int a)
    {
        roll_no = a;
    }
    void printno()
    {
        cout << "your roll no is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void printMarks(void)
    {
        cout << "your result is here" << endl
             << "maths:" << maths << endl
             << "Physics:" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore(void)
    {
        cout << "your pt score is " << score << endl;
    }
};

class result : virtual public test, virtual public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = physics + maths + score;
        printno();
        printMarks();
        printScore();
        cout << "your total score is " << total << endl;
    }
};
int main()
{
    result r;
    r.set_no(101);
    // r.printno();

    r.setMarks(89.9, 96.45);
    // r.printMarks();

    r.setScore(80);
    // r.printScore();

    r.display();
//if we were not have used virtiual then it will be showing us that ambiguity related problms
    return 0;
}