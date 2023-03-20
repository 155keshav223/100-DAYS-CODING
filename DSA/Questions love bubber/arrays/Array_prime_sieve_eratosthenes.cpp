#include<iostream>
using namespace std;

void isprimme(int n){
    int prime[100]={0};
    for(int i=0;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=0 ;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    isprimme(n);
}