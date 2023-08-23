// Print the following pattern
// Input : n = 5
// Output:

// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows: ";
    cin>>n;
    int m =n-1;
    for(int i =1; i<=m; i++){
        for(int j=1; j<i; j++) cout<<"  ";
        cout<<"* ";
        for(int k=1; k<=m-i+1; k++) cout<<"  ";
        for(int k=1; k<=m-i; k++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }
    for(int i1 =1; i1<=m; i1++) cout<<"  ";
    cout<<"* ";
}