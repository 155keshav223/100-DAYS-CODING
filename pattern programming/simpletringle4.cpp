// *****
//  ****
//   ***
//    **
//     *

#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=i+1;k>0;k--){
            cout<<" ";
        }
        for(j=n-i+1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        
        
        
    }
    

}