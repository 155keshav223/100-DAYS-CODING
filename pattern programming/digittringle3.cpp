//     1
//    22
//   333
//  4444
// 55555
#include <iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=n-i;k>0;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}