#include <iostream>
using namespace std;

int main(){
    int i=0,n,count=0;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    while(i<n){
        int j = 0;
        while(j<n){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}