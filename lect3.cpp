#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<ch<<" is a uppercase character."<<endl;
    }else if(ch>='a' && ch<='z'){
        cout<<ch<<" is a lowercase character."<<endl;
    }else if(ch>='0' && ch<='9'){
        cout<<ch<<" is a numeric character."<<endl;
    }
}