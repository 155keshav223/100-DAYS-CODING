#include<iostream>;
#include<cmath>;
using namespace std;
void check(int arr[],int n){
    int X= 6e+2;
    bool a[X];
    for(int i=0;i<X;i++){
        a[i]=false;
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=0){
            a[arr[j]]=true;
            
        }
    }
    int k=0;
    while(k<n){
        if(a[k]==false){
            cout<<k;
            break;
        }
        k++;
    }
}
int main(){
    int a[]={3,2,5,4,0};
    check(a,5);
}