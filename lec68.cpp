#include <iostream>
using namespace std;

template <class t>
class shubham
{
public:
    t data;
    shubham(t a)
    {
        data = a;
    }
    void printdata();
};

template <class t>
void shubham<t>::printdata()
{
    cout << data;
}

// void fn(int a){
//     cout<<"im first fun "<<a<<endl;;
// }

template<class t>
void fn(t a){
    cout<<"iam teplatized function"<<endl;
}

template<class t>
void fn1 (t a){
    cout<<"iam teplatized function2"<<endl;
}
int main()
{
    // shubham<char> s('g');
    // shubham<int> s(898);
    // // shubham<float> s(9.976);
    // cout << s.data << endl;
    // s.printdata();

    fn(6);
    // fn1(6);

    return 0;
}