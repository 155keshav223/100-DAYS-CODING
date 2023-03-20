// Equilateral tringle

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";

        }
        cout<<endl;

    }
}