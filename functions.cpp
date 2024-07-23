#include<iostream>
using namespace std;

bool isEven (int num){
    if(num%2==0){
        cout<<"Even number.";
    }else{
        cout<<"Odd number.";
    }
}

int main(){
    int a;
    cout<<"Enter a number to check its parity: ";
    cin>>a;
    isEven(a);
}