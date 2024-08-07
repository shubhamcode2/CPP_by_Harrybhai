#include <iostream>
using namespace std;

template <class T>  

class vector
{
public:

    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

//templates helps to dry -> dont repeat yourself 
// we made above templtae for datatype proble 

// class vector
// {
// public:
//     double *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new double[size];
//     }
//     double dotProduct(vector &v)
//     {
//         double d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// class vector
// {
// public:

//      int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };


int main()
{
    vector <double> v1(3);
    v1.arr[0] = 3.56;
    v1.arr[1] = 2.5634;
    v1.arr[2] = 1.34657;

    vector <double> v2(3);
    v2.arr[0] = 3.5;
    v2.arr[1] = 2.2;
    v2.arr[2] = 2.9;

    float a = v1.dotProduct(v2);
    cout << a;

    return 0;
}

// int main()
// {
//     vector v1(3);
//     v1.arr[0] = 3;
//     v1.arr[1] = 2;
//     v1.arr[2] = 1;

//     vector v2(3);
//     v2.arr[0] = 3;
//     v2.arr[1] = 2;
//     v2.arr[2] = 2;

//     double a = v1.dotProduct(v2);
//     cout << a;

//     return 0;
// }