#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter a number for diamond pattern: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1; j++){
            int a =j;
            int b =i;
            if(b>n) b = 2*n-i;
            if(a<=n) a = (n-j)+1;
            else a= j-(n-1);
            if(b==a) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}