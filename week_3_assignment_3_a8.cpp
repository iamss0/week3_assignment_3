// Print the following pattern
// Sample Input : n = 4
// Output :
//      1
//    2   2
//  3       3
// 4         4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1; j++){
            int a =j;
            if(a<=n) a = (n-j)+1;
            else a= j-(n-1);
            if(i==a) cout<<a<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}