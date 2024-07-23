#include <iostream>
using namespace std;

int main(){
    int i=0,n;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    while(i<n){
        int j = 0;
        while(j<n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}