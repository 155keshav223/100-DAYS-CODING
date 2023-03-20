#include<iostream>;
#include<cmath>;
using namespace std;
int sumarr(int arr[],int s,int e){
    int sum=0;
    for(int i=s;i<=e;i++){
        sum+=arr[i];
    }
    return sum;

}
void sumsubarr(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<sumarr(arr,i,j)<< " ";
        }
    }
}
int main(){
    int a[]={1,2,0,7,2};
    // cout<<sumarr(a,0,2);
    sumsubarr(a,5);

}