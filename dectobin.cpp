// #include <iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     float binaryEq=0,i=0,n;
//     cout<<"Enter a decimal number: ";
//     cin>>n;
//     int number = n;
//     if(number>0){
//         while(number!=0){
//         int bit = number & 1;
//         binaryEq = binaryEq + (bit*pow(10,i));
//         number = number >> 1;
//         i++;
//     }
//     cout<<"The binary equivalent of "<<n<<" is "<<binaryEq<<".";
//     }else if (n<0){
//         number = -(number);
//         while(number!=0){
//             int bit;
//             if(number&1==1){
//                 bit = 0;
//             }else{
//                 bit = 1;
//             }
//             binaryEq = binaryEq + (bit*pow(10,i));
//             number = number >> 1;
//             i++;
//         }
//         binaryEq = binaryEq + 1;
//         cout<<"The binary equivalent of "<<n<<" is "<<binaryEq<<".";
//     }else{
//         binaryEq = 0;
//         cout<<"The binary equivalent of "<<n<<" is "<<binaryEq<<".";
//     }
// }   

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"The Binary of the Number is : "<<bitset<32>(n)<<endl;
     return 0;
}
