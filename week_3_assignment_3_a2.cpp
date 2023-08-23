// Print the following pattern
// Input: n = 4
// Output:
//      A
//    A B C
//  A B C D E
// A B C D E F G

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Emter number of lines: ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int k=1; k<=n-i;k++) cout<<"  ";
        for(int j=1; j<=2*i-1; j++) cout<<(char)(j+64)<<" ";
        cout<<endl;
    }
}