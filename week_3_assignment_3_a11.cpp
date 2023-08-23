#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int m = n-1; // height of triangles in pattern

    for(int p =1;p<=2*n-1;p++) cout<<"* ";
    cout<<endl;
    for(int i1=1; i1<=m; i1++){
        for(int j1=1; j1<=m-i1+1;j1++)cout<<"* ";
        for(int k1=1; k1<=2*i1-1;k1++)cout<<"  ";
        for(int l1=1; l1<=m-i1+1;l1++)cout<<"* ";
        cout<<endl;
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i;j++)cout<<"* ";
        for(int k=1; k<=2*(m-i+1)-1;k++)cout<<"  ";
        for(int l=1; l<=i;l++)cout<<"* ";
        cout<<endl;
    }
    for(int p1 =1;p1<=2*n-1;p1++) cout<<"* ";
}