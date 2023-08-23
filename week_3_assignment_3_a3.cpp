// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Emter number of lines: ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int k=1; k<=n-i;k++) cout<<"  ";
        for(int g=i; g>=1; g--) cout<<(char)(g+64)<<" ";
        for(int j=1; j<i; j++) cout<<(char)(j+65)<<" ";
        cout<<endl;
    }
}