#include<iostream>
using namespace std;

//lecture 17
//make a function inline when the operation is small and 
//we put inline to make it fast as there are many lines to execute so it gives
// a strees to the computer so use inline learn about it more;
// do not use inline functions into recursion and static variables in use;



inline int product(int a, int b){
    return a*b;
}


/*
know about static function
int product(int a, int b){
    static int c = 0;//this executes only once
    c = c+1;//next time the functions runs the value of c will be retained
    return a*b+c;
} */

/*
int main (){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    return 0;
}
*/
float moneyRecived(float currentMoney, float factor = 1.04)//factor has been provided with a default value
{
    return currentMoney * factor;
}
int main(){
    int money =100000;
    cout<<"normal aadmi "<<moneyRecived(money)<<endl;
    cout<<"khas aadmi "<<moneyRecived(money,1.1);//factor value u can change too
    return 0;
}


//constant argument
int strlen(const char *p){

}