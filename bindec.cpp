#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int n,i=0;
    int integer = 0;
    cout<<"Enter a binary number: ";
    cin>>n;
    while(n!=0){
        int bit = n % 10;
        if(bit==1){
            integer = integer + bit*pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout<<integer;
}