#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout<<"A & B = "<<(a&b)<<endl;
    cout<<"A | B = "<<(a|b)<<endl;
    cout<<"A ^ B = "<<(a^b)<<endl;
    cout<<"~A = "<<~a<<endl;
    cout<<"~B = "<<~b<<endl;
    cout<<"A left shift by 1 = "<<(a<<1)<<endl; //multiply by 2 n times where n is the number of shifts
    cout<<"B right shift by 2 = "<<(b>>2)<<endl; //divide by 2 n times where n is the number of shifts
    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a<<endl;
}