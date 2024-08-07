#include <iostream>
using namespace std;
// Multilevel inheritance

class student
{
protected:
    int roll_Number;

public:
    void set_roll_Number(int);
    void get_roll_Number(void);
};

void student ::set_roll_Number(int r)
{
    roll_Number = r;
}
void student ::get_roll_Number()
{
    cout << "roll number is " << roll_Number << endl;
}

class exam : public student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam::set_marks(float m1, float m2){
    math = m1;
    physics = m2;
}

void exam::get_marks(void){
   cout<<"marks respectively for maths and physics are "<< math<< " and "<<physics<<endl;
}


class result : public exam{
    float percentage;
    public:
    void display(){
        get_roll_Number();
        get_marks();
        cout<<"Your percentage is "<<( physics + math )/2 <<"% "<<endl;
    }

};
int main()
{
    result shubh;
    shubh.set_roll_Number(148);
    shubh.get_roll_Number();
    shubh.set_marks(80,75);
    // shubh.get_marks();
    shubh.display();

    return 0;
}

//note:
//1. if we are inheriting b from a and c from b:[ A--->B--->C ]
//2. a is base class for b and b is base class for c;
//3. A--->B--->C is called inheritance path