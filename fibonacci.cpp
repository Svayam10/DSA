#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,sum=1;
    cout<<"Enter the nuber of elements you want in the fibonacci series: ";
    cin>>n;
    for(int i=0;i<n/2;i++){
        cout<<a<<" "<<b<<" ";
        a = a + b;
        b = a + b;
        sum = sum + a + b;
    }
    cout<<sum<<endl;
}