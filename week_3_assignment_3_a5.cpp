// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number lines; ";
    cin>>n;
    int m = n-1;
    for(int p =1;p<=n;p++) cout<<p<<" ";
    for(int q =m;q>=1;q--) cout<<q<<" ";
    cout<<endl;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m-i+1;j++)cout<<j<<" ";
        for(int k=1; k<=2*i-1;k++)cout<<"  ";
        for(int l=m-i+1; l>=1;l--)cout<<l<<" ";
        cout<<endl;
    }
    
}