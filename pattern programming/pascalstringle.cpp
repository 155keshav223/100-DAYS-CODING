// pascel tringle
#include <iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        int coeff=1;
        for(j=n-i;j>0;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<coeff<<" ";
            coeff=coeff*(i-k)/k;

        }
        cout<<endl;
    }
}