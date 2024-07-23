#include <iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}