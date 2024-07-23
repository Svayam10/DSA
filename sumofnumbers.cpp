#include <iostream>
using namespace std;

int main(){
    int n,i=0,sum=0;
    cout<<"Enter the number till where you want sum: "<<endl;
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout<<"The sum of first "<<n<<" even numbers is: "<<sum<<endl;
    return 0;
}