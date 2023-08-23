// Print the following pattern

// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number lines; ";
    cin>>n;
    int m = n-1;
    for(int p =1;p<=2*n-1;p++) cout<<(char)(p+64)<<" ";
    cout<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i+1;j++)cout<<(char)(j+64)<<" ";
        for(int k=1; k<=2*i-1;k++)cout<<"  ";
        for(int l=n+i; l<=2*n-1;l++)cout<<(char)(l+64)<<" ";
        cout<<endl;
    }
    
}