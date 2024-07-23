#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime=0;
    cout<<"Enter a number to check weather it is prime or not: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }else{
            isPrime = 1;
        }
    }
    if(isPrime==0){
        cout<<n<<" is not a prime number.";
    }else{
        cout<<n<<" is a prime number.";
    }
}