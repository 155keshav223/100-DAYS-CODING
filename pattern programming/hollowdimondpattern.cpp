// hollow dimond program
#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,l;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<2*n;j++){
            if(i+j<=n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            if(i+n<=j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}