#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number till where you want the sum: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"The sum of first "<<n<<" numbers is: "<<sum<<endl;
}