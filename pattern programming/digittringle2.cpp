// 11111
// 2222
// 333
// 44
// 5

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the vslue of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n-i+1;j>0;j--){
            cout<<i;
        }
        cout<<endl;
    }
}