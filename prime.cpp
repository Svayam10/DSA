#include <iostream>
using namespace std;

int main(){
    int n,i=2;
    bool flag=1;
    cout<<"Enter a number to check whether it is prime or not: "<<endl;
    cin>>n;
    while(i<n){
        if(n%i == 0){
            flag = 0;
            break;
        }else{
            flag = 1;
            i++;
        }
    }
    if(flag == 0){
        cout<<n<<" is not a prime number"<<endl;
    }else{
        cout<<n<<" is a prime number"<<endl;
    }
}