// reverse Equilateral

#include <iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j>0;j--){
            cout<<" ";
        }
        for(k=n-i+1;k>0;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
}