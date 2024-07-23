#include<iostream>
using namespace std;

int fact(int num){
    int factorial = 1;
    for(int i=1;i<=num;i++)
        factorial = factorial * i;
    return factorial;
}

int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n,r,ans;
    cout<<"Enter the value of 'n': ";
    cin>>n;
    cout<<"Enter the value of 'r': ";
    cin>>r;
    ans = ncr(n,r);
    cout<<"The ans of nCr is "<<ans<<endl;
}
