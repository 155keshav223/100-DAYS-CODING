// 1
// 22
// 333
// 4444
// 55555
// 666666

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}