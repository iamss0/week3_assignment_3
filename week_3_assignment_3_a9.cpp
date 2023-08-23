#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int m = n-1;
    for(int i=1; i<=n; i++) cout<<"  "; // spaces in first line
    cout<<"* "<<endl; //star in first line
    
    //upper triangle pattern
    for(int i1=1;i1<=m;i1++){
        for(int j=1;j<=m-i1+1;j++) cout<<"  ";
        cout<<"* ";
        for(int k=0;k<i1-1;k++) cout<<"  ";
        cout<<"* ";
        for(int k=0;k<i1-1;k++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }
    //center line
    for(int c = 1; c<=2*n+1; c++) cout<<"* ";
    cout<<endl;

    //lower triangle pattern
    for(int i2=1;i2<=m;i2++){
        for(int j2=1;j2<=i2;j2++) cout<<"  ";
        cout<<"* ";
        for(int k=0;k<m-i2;k++) cout<<"  ";
        cout<<"* ";
        for(int k=0;k<m-i2;k++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }

    for(int i3=1; i3<=n; i3++) cout<<"  "; // spaces in LAST line
    cout<<"* "<<endl; //star in last line
}